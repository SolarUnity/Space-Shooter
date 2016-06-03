using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameController : MonoBehaviour {

    //当前的记分牌
    public Text scoreText;
    //重新开始显示
    public Text restartText;
    //游戏结束
    public Text gameOverText;
    //当前分数
    public int score;

    //生成的对象
    public GameObject[] hazards;
    //生成的基准坐标
    public Vector3 spawnValues;
    //生成的陨石数量
    public int hazardCount;
    //生成时间
    public float spawnWait;
    //开始等待时间
    public float startWait;
    //每一波之后的等待时间
    public float waveWait;
    //每一波之后减少的部署时间
    public float afterWave;

    private int startCount;
    private bool gameOver;
    private bool restart;

    //更新分数
    void UpdateScore()
    {
        scoreText.text = "Score: " + score.ToString();
    }

    // Use this for initialization
    void Start()
    {
        gameOver = false;
        restart = false;
        restartText.text = "";
        gameOverText.text = "";
        score = 0;
        UpdateScore();
        startCount = hazardCount;
        StartCoroutine(SpawnWaves());
    }

    void Update()
    {
        if (restart)
        {

            if (Input.GetKeyDown(KeyCode.R))
            {
                Application.LoadLevel(Application.loadedLevel);
            }
        }
    }


    public void AddScore(int newScoreValue)
    {
        score += newScoreValue;
        UpdateScore();
    }

    public void GameOver()
    {
        gameOver = true;

        restart = true;
        gameOverText.text = "Game Over!";
        restartText.text = "Press 'R' for Restart";
    }

    //生成陨石流
    IEnumerator SpawnWaves()
    {
        //初始等待时间，交出CPU时间
        yield return new WaitForSeconds(startWait);
        //不断开始下一波
        while (true)
        { 
            //每一波的数量
            for (int i = 0; i < hazardCount; i++)
            {
                GameObject hazard = hazards[Random.Range(0,hazards.Length)];
                //生成坐标
                Vector3 spawnPosition = new Vector3(Random.Range(-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
                //旋转角度
                Quaternion spawnRotation = Quaternion.identity;
                //生成陨石
                Instantiate(hazard, spawnPosition, spawnRotation);
                //完成生成之后，等待下一次部署时间
                yield return new WaitForSeconds(spawnWait);
            }
            //计算下次的陨石生成数量
            hazardCount *= startCount;
            if (hazardCount >50000)
            {
                hazardCount = 50000;
            }
            //计算下一波生成陨石的速率
            spawnWait *= afterWave;
            //但是太快会出bug的
            if (spawnWait<0.1f)
            {
                spawnWait = 0.1f;
            }
            yield return new WaitForSeconds(waveWait);

            //游戏结束之后
            /**
            if (gameOver)
            {
                restartText.text = "Press 'R' for Restart";
                restart = true;
                break;
            }*/
            if (gameOver)
            {
                break;
            }
            
        }
       
    }
}
