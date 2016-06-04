using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;


//开火虚拟按钮
public class SimpleTouchAreaButton : MonoBehaviour,IPointerDownHandler,IPointerUpHandler
{


	//是否可以触发射击动作
	private bool canFire;
	//平滑移动设定值
	public float smoothing;
	//是否已经触控
	private bool touched;
	//触控事件Id
	private int pointerId;

	void Awake ()
	{
		touched = false;
	}

	public void OnPointerDown (PointerEventData data)
	{
		if (!touched) {
			touched = true;
			pointerId = data.pointerId;
			canFire = true;
		}
	}

	public void OnPointerUp (PointerEventData data)
	{
		if (data.pointerId == pointerId) {
			//复位
			touched = false;
			canFire = false;
		}

	}

	public bool GetCanFire(){
		return canFire;
	}

}
