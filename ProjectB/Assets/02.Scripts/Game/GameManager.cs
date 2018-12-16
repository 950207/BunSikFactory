using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {

    private static GameManager Instance = null;

    public static GameManager GetInstance()
    {
        if (Instance == null)
        {
            Instance = new GameManager();
        }
        return Instance;
    }

    /** 씬을 바꾼다 */
    public void ChangeScene(int InSceneNum)
    {
        SceneManager.LoadSceneAsync(InSceneNum, LoadSceneMode.Single);
    }
}
