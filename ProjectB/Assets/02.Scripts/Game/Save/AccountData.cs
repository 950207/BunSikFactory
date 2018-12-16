using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public class AccountData : MonoBehaviour
{
    string StoreName;
    int Money;
    int Cash;
    uint PlayTime;
    
    // ++ 재료 정보들..
    
    public string GetStoreName()
    {
        return StoreName;
    }

    public int GetMoney()
    {
        return Money;
    }

    public int GetCash()
    {
        return Cash;
    }

    public uint GetPlayTime()
    {
        return PlayTime;
    }


    // Set
    public void SetStoreName(string InStoreName)
    {
        StoreName = InStoreName;
    }

    public void SetMoney(int InMoney)
    {
        Money = InMoney;
    }


    public void SetCash(int InCash)
    {
        Cash = InCash;
    }

    public void SetPlayTime(uint InPlayTime)
    {
        PlayTime = InPlayTime;
    }

}
