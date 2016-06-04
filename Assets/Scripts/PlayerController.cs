using UnityEngine;
using System.Collections;


[System.Serializable]
public class Boundary{ 
    public float xMin, xMax, zMin, zMax;

}

public class PlayerController : MonoBehaviour {
    public float speed;
    public float tilt;
    public Boundary boundary;
    public float fireRate;
    public GameObject shot;
    public Transform [] shotSpawns;

	//触发射击的虚拟按钮
	public SimpleTouchAreaButton simpleTouchAreaButton;
	//触发移动的虚拟哟啊干
	public SimpleTouchPad simpleTouchPad;

    private float nextFire;
    private Rigidbody rb;
    private AudioSource audio;

	//标准化之后的翻转轨迹
	private Quaternion calibrationQuaternion;

	//计算陀螺仪轨迹并进行反转
	void CalibrateAccellorometer(){
		Vector3 snapShot = Input.acceleration;
		Quaternion rotate = Quaternion.FromToRotation (new Vector3 (0.0f, 0.0f, -1.0f), snapShot);
		calibrationQuaternion = Quaternion.Inverse (rotate);
	}

	//得到前者计算的轨迹并进行修正
	Vector3 FixAccelleration(Vector3 acceleration){
		return calibrationQuaternion * acceleration;
	}

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        audio = GetComponent<AudioSource>();
		//初始化校准陀螺仪
		CalibrateAccellorometer ();
    }

    // Update is called once per frame
    void Update () {
		//键盘模式下开火
		/*
        if (Input.GetButton("Fire1") && Time.time >= nextFire)
        {
            nextFire = Time.time + fireRate;
            //在射击生成的地方，生成一个shot实例
            for (int i = 0; i < shotSpawns.Length; i++)
            {
                Transform shotSpawn = shotSpawns[i];
                GameObject clone = Instantiate(shot, shotSpawn.position, shotSpawn.rotation) as GameObject;
            }
            audio.Play();
        }*/

		//虚拟摇杆模式开火
		if (simpleTouchAreaButton.GetCanFire() && Time.time >= nextFire)
		{
			nextFire = Time.time + fireRate;
			//在射击生成的地方，生成一个shot实例
			for (int i = 0; i < shotSpawns.Length; i++)
			{
				Transform shotSpawn = shotSpawns[i];
				GameObject clone = Instantiate(shot, shotSpawn.position, shotSpawn.rotation) as GameObject;
			}
			audio.Play();
		}
    }
   
    void FixedUpdate()
    {
		//键盘模式
		/*
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");
		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);
		*/

		//使用手机陀螺仪进行控制
		/*
		Vector3 accelerationRaw = Input.acceleration;
		Vector3 acceleartion = FixAccelleration (accelerationRaw);
		Vector3 movement = new Vector3(acceleartion.x,0.0f,acceleartion.y);
		*/

		//使用虚拟摇杆
		Vector2 direction = simpleTouchPad.GetDirection ();
		Vector3 movement = new Vector3 (direction.x, 0.0f, direction.y);
        
		//控制飞行轨迹
		rb.velocity = movement * speed;
        //控制不要飞出边界
        rb.position = new Vector3(Mathf.Clamp(rb.position.x, boundary.xMin, boundary.xMax), 0.0f, Mathf.Clamp(rb.position.z, boundary.zMin, boundary.zMax));
        //控制飞行翻转
        rb.rotation = Quaternion.Euler(0, 0, rb.velocity.x * -tilt);
    }


}
 