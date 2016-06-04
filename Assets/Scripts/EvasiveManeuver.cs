using UnityEngine;
using System.Collections;

public class EvasiveManeuver : MonoBehaviour {

    //狗斗
    public float dodge;
    //移动平滑度
    public float smoothing;
    //水平移动翻转
    public float tilt;



    //选用向量的原因是设定数值范围
    //敌军飞船刷新的冷却时间
    public Vector2 startWait;
    //作用时间
    public Vector2 maneuverTime;
    //下一艘的刷新等待时间
    public Vector2 maneuverWait;
    
   

    public Boundary boundary;
    private Rigidbody rb;

    //目标移动位置
    private float targetManeuver;
    //移动速度
    private float currentSpeed;
    //主角的位置
    private Transform playerTransform;

    // Use this for initialization
    void Start () {
        rb = GetComponent<Rigidbody>();
		GameObject gameObject = GameObject.FindGameObjectWithTag ("Player");
		if(gameObject!=null){
			playerTransform = gameObject.transform;
		}
        currentSpeed = rb.velocity.z;
        StartCoroutine(Evade());
	}

    IEnumerator Evade()
    {
        yield return new WaitForSeconds(Random.Range(startWait.x, startWait.y));
        while (true)
        {
            bool flag = Random.Range(0, 1) > 0.5f;
            if (playerTransform == null || flag)
            {
                //用于随机生成当前敌军飞船的位置 即-6 -> 6
                targetManeuver = Random.Range(1, dodge) * -Mathf.Sign(transform.position.x);
            }
            else
            {
                //或者更狠一点，直接奔主角飞过来,这种叫做精英怪
                targetManeuver = playerTransform.position.x;
            }
            
            yield return new WaitForSeconds(Random.Range(maneuverTime.x,maneuverTime.y));
            targetManeuver = 0;
            yield return new WaitForSeconds(Random.Range(maneuverWait.x,maneuverWait.y));
        }
    }
	
	// Update is called once per frame
	void FixedUpdate () {
        //根据当前位置，目标位置和最大变更值计算新位置
        float newMavneuver = Mathf.MoveTowards(rb.velocity.x,targetManeuver,Time.deltaTime*smoothing);
        rb.velocity = new Vector3(newMavneuver, 0.0f,currentSpeed);
        //当超过Boundary位置，消除
        rb.position = new Vector3(
            Mathf.Clamp(rb.position.x,boundary.xMin,boundary.xMax),
            0.0f,
            Mathf.Clamp(rb.position.z,boundary.zMin,boundary.zMax)
        );
        rb.rotation = Quaternion.Euler(0.0f, 0.0f, rb.velocity.x * -tilt);
	}
}
