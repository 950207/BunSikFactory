using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EntityManager : MonoBehaviour
{
    private static EntityManager Instance = null;
    private static Player LocalPlayer = null;
    
    /** EntityID 규약
     * 플레이어 : 0
     * Guest ( 손님 ) : 10 ~ 99
     * Food ( 음식 ) : 100 ~ 999
     * Structure ( 구조물 ) : 1000 ~ 
     */
    private int GuestID = 10;
    private int FoodID = 100;
    private int StructureID = 1000;

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

    /** 플레이어 가져오기 */
    public Player GetPlayer()
    {
        return (Player)EntityList[0];
    }

    /** 엔티티 타입별 스폰 */
    public void SpawnEntity(E_EntityType InEntityType, int InEntityTID)
    {
        EntityBase Entity = null;
        EntityInfo entityInfo = new EntityInfo();
        entityInfo.SetInfo(InEntityType, InEntityTID);

        switch (InEntityType)
        {
            case E_EntityType.Player:
                entityInfo.EntityID = 0;
                Entity = new Player();           
                break;
            case E_EntityType.Guest:
                entityInfo.EntityID = GuestID++;
                Entity = new Guest();
                break;
            case E_EntityType.Food:
                entityInfo.EntityID = FoodID++;
                Entity = new Food();
                break;
            case E_EntityType.Structure:
                entityInfo.EntityID = StructureID++;
                Entity = new Structure();
                break;
        }

        Entity.SetEntity(entityInfo);
        EntityList.Add(entityInfo.EntityID, Entity);
    }
}