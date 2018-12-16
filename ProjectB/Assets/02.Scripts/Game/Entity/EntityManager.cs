using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EntityManager : MonoBehaviour
{
    private static EntityManager Instance = null;

    public static EntityManager GetInstance()
    {
        if (Instance == null)
        {
            Instance = new EntityManager();
        }
        return Instance;
    }
    
    public void CreatePlayer()
    {
        SpawnCharacter(E_CharacterType.Player);
    }

    /** 캐릭터 타입별 스폰 */
    public void SpawnCharacter(E_CharacterType InCharacterType)
    {
        switch(InCharacterType)
        {
            case E_CharacterType.Player:
                break;
            case E_CharacterType.NormalGuest:
                break;
            case E_CharacterType.SpecialGuest:
                break;
            case E_CharacterType.TakeOutGuest:
                break;
        }
    }

    /** 음식 타입별 스폰 */
    public void SpawnFood(E_ProductType InProductType)
    {
        switch (InProductType)
        {
            case E_ProductType.TteokBokki:
                break;
            case E_ProductType.Sundae:
                break;
            case E_ProductType.Odeng:
                break;
        }
    }
}
