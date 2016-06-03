using UnityEngine;
using System.Collections;

public class WeaponController : MonoBehaviour {


    //敌人进行射击
    public GameObject shot;
    //出生地点
    public Transform showSpawn;
    //射速
    public float fireRate;
    //延迟
    public float delay;

    private AudioSource audioSource;


	// Use this for initialization
	void Start () {
        audioSource = GetComponent<AudioSource>();
        //不断重复执行某个方法
        InvokeRepeating("Fire", delay, fireRate);
	}
	
    void Fire()
    {
        Instantiate(shot, showSpawn.position, showSpawn.rotation);
        audioSource.Play();
    }

	// Update is called once per frame
	void Update () {
	    
	}
}
