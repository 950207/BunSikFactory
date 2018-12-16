using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

public class SaveManager : MonoBehaviour
{
    private static SaveManager instance = null;
    static string SAVE_FILE_PATH;

    private SaveManager()
    {
        SAVE_FILE_PATH = Application.persistentDataPath + "/SaveData.dat";
    }

    public static SaveManager GetInstance()
    {
        if(instance == null)
        {
            instance = new SaveManager();
        }

        return instance;
    }

    // 세이브 데이터 파일 이름 얻어오기.
    public static string GetSaveFilePath()
    {
        return SAVE_FILE_PATH;
    }

    // 데이터 존재여부 체크
    public bool IsExistData()
    {
        return File.Exists(SAVE_FILE_PATH);
    }

    // 데이터 저장
    public void Save()
    {
        BinaryFormatter bf = new BinaryFormatter();
        // 파일을 생성하고.
        FileStream file = File.Create(SAVE_FILE_PATH);

        // 저장할 데이터 생성 ( TODO : 게임매니져에서 가져오기)
        AccountData SaveData = new AccountData();
        
        //SaveData.SetCash( ...

        // 처리필요 SaveData =
        bf.Serialize(file, SaveData);
        file.Close();
    }

    // 데이터 로드
    public void Load()
    {
        // 데이터가 존재할때
        if(IsExistData())
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(SAVE_FILE_PATH, FileMode.Open);

            // 파일 정보가 유효할때만 데이터를 로드한다.
            if (file != null && file.Length > 0)
            {
                AccountData LoadData = (AccountData)bf.Deserialize(file);
                // 로드하고 담아내기
            }

          

            file.Close();
        }
    }

    // 데이터 제거
    public void Delete()
    {
        // 데이터가 존재할때 제거
        if(IsExistData())
        {
            File.Delete(SAVE_FILE_PATH);
        }
    }
}