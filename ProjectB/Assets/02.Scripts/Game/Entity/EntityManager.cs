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

    public EntityBase[] Entitys;

    /** 엔티티 리스트 */
    private Dictionary<int, EntityBase> EntityList = new Dictionary<int, EntityBase>();

    public void Set(int Key, EntityBase Value)
    {
        if (EntityList.ContainsKey(Key))
        {
            EntityList[Key] = Value;
        }
        else
        {
            EntityList.Add(Key, Value);
        }
    }

    public EntityBase Get(int Key)
    {
        EntityBase Entity = null;

        if (EntityList.ContainsKey(Key))
        {
            Entity = EntityList[Key];
        }

        return Entity;
    }

    public void CreatePlayer()
    {
        SpawnCharacter(E_CharacterType.Player);
    }

    /** 캐릭터 타입별 스폰 */
    public void SpawnCharacter(E_CharacterType InCharacterType)
    {
        EntityBase Entity = null;
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
        if (!Entity)
            EntityList.Add(12, Entity);
    }

    /** 음식 타입별 스폰 */
    public void SpawnFood(E_ProductType InProductType)
    {
        EntityBase Entity = null;
        switch (InProductType)
        {
            case E_ProductType.TteokBokki:
                break;
            case E_ProductType.Sundae:
                break;
            case E_ProductType.Odeng:
                break;
        }
        if (!Entity)
            EntityList.Add(12, Entity);
    }
}
