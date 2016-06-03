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
    public Transform shotSpawn;

    private float nextFire;
    private Rigidbody rb;
    private AudioSource audio;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        audio = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update () {
        if (Input.GetButton("Fire1") && Time.time >= nextFire)
        {
            nextFire = Time.time + fireRate;
            //在射击生成的地方，生成一个shot实例
            GameObject clone = Instantiate(shot, shotSpawn.position, shotSpawn.rotation) as GameObject;
            audio.Play();
        }
    }
   
    void FixedUpdate()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        //控制飞行轨迹
        rb.velocity = new Vector3(moveHorizontal, 0.0f, moveVertical) * speed;
        //控制不要飞出边界
        rb.position = new Vector3(Mathf.Clamp(rb.position.x, boundary.xMin, boundary.xMax), 0.0f, Mathf.Clamp(rb.position.z, boundary.zMin, boundary.zMax));
        //控制飞行翻转
        rb.rotation = Quaternion.Euler(0, 0, rb.velocity.x * -tilt);
    }
}
