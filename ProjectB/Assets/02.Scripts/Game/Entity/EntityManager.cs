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

    /** 캐릭터 타입별 스폰 */
    public void SpawnEntity(E_EntityType InEntityType)
    {
        EntityBase Entity = null;
        switch(InEntityType)
        {
            case E_EntityType.Player:
                break;
            case E_EntityType.Guest:
                break;
            case E_EntityType.Food:
                break;
            case E_EntityType.Structure:
                break;
        }
    }
}
