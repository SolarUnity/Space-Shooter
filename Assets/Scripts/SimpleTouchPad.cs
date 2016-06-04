using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

/**
 * 用于控制触控模型，建立一个简单的虚拟摇杆
 */
public class SimpleTouchPad : MonoBehaviour,IPointerDownHandler,IDragHandler,IPointerUpHandler
{

	//平滑移动设定值
	public float smoothing;

	private Vector2 origin;
	private Vector2 direction;
	private Vector2 smoothDirection;

	//是否已经触控
	private bool touched;
	//触控事件Id
	private int pointerId;

	void Awake ()
	{
		direction = Vector2.zero;
		touched = false;
	}

	public void OnPointerDown (PointerEventData data)
	{
		if (!touched) {
			touched = true;
			pointerId = data.pointerId;
			//设置初始位置
			origin = data.position;
		}

	}

	public void OnDrag (PointerEventData data)
	{
		//解决多重触控时出现的冲突
		if (data.pointerId == pointerId) {
			//比较初始位置和当前位置的不同之处
			Vector2	currentPosition = data.position;
			Vector2 directionRaw = currentPosition - origin;
			//将坐标设置为以0->1为大小的向量
			direction = directionRaw.normalized;
			//Debug.Log (direction);
		}

	}


	public void OnPointerUp (PointerEventData data)
	{
		if (data.pointerId == pointerId) {
			//复位
			direction = Vector2.zero;
			touched = false;
		}

	}

	public Vector2 GetDirection ()
	{
		smoothDirection = Vector2.MoveTowards (smoothDirection, direction, smoothing);
		return smoothDirection;
	}
		
	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
}
