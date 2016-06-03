using UnityEngine;
using System.Collections;

public class DestroyByContact : MonoBehaviour {

    public GameObject explosion;
    public GameObject playerExplosion;
    public int scoreValue;

    private GameController gameController;

    void Start()
    {
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject!=null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();
        }
        if (gameController == null)
        {
            Debug.LogError("Cannot find GameController");
        }
    }

    void OnTriggerEnter(Collider other)
    {
        //if (other.tag == "Boundary" || other.tag == "Enemy")
        if (other.CompareTag( "Boundary") || other.CompareTag("Enemy"))
        {
            return;
        }
        //除非存在需要爆炸的东西，否则不触发效果
        if (explosion != null){
        
            Instantiate(explosion, transform.position, transform.rotation);
        }
        //如果击中了玩家，在玩家区域爆炸
        if (other.CompareTag("Player"))
        {
            Instantiate(playerExplosion, other.transform.position, other.transform.rotation);
            gameController.GameOver();
        }
        gameController.AddScore(scoreValue);
        Destroy(other.gameObject);
        Destroy(gameObject);
    }

  
}
