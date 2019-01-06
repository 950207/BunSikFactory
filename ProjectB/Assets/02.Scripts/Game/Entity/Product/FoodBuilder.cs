using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class FoodBuilder : MonoBehaviour
{
    public FoodSlot[] FoodSlots = new FoodSlot[5];

    private static FoodBuilder Instance = null;
    private EntityInfo[] Foods = new EntityInfo[5];

    /** 현재 빌더 음식 터치 게이지*/
    private Dictionary<FoodSlot, float> FoodCurGauges = new Dictionary<FoodSlot, float>();
    private float PlayerGauge = 0;
    
    // Start is called before the first frame update
    void Start()
    {
        PlayerGauge = EntityManager.GetInstance().GetPlayer().TouchGauge;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {

            RefreshFoodList();

            Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            Vector2 mousePos2D = new Vector2(mousePos.x, mousePos.y);

            RaycastHit2D hit = Physics2D.Raycast(mousePos2D, Vector2.zero);
            if (hit.collider != null)
            {
                if(hit.collider.gameObject.CompareTag("FoodSlot"))
                {
                    Debug.Log(hit.collider.gameObject.name);
                    AddGauge(hit.collider.gameObject.GetComponent<FoodSlot>());
                }
            }
        }
    }

    public static FoodBuilder GetInstance()
    {
        if (Instance == null)
        {
            Instance = new FoodBuilder();
        }
        return Instance;
    }

    public void Set(EntityInfo[] FoodInfos)
    {
        Foods = FoodInfos;
        RefreshFoodList();
    }

    void RefreshFoodList()
    {
        for (int i=0; i< FoodSlots.Length; ++i)
        {
            FoodSlots[i].SlotNumber = i;
            //FoodSlots[i].SetEntity(Foods[i]);
            //
            //SpriteRenderer FoodSpriteRenderer = FoodSlots[i].GetComponent<SpriteRenderer>();
            //FoodSpriteRenderer.sprite = FoodSlots[i].EntitySprite;
        }
    }

    void AddGauge(FoodSlot InClickSlot)
    {
        if(FoodCurGauges.ContainsKey(InClickSlot))
        {
            FoodCurGauges[InClickSlot] += PlayerGauge;
        }

       // 최대 게이지 보다 현재 게이지가 높다면 스폰하고 다시 현재 게이지를 0으로 만든다.
       if(InClickSlot.MaxGauge <= FoodCurGauges[InClickSlot])
       {
           FoodCurGauges[InClickSlot] = 0;
       
           // 해당 음식 스폰
           EntityManager.GetInstance().SpawnEntity(InClickSlot.EntityType, InClickSlot.EntityTID);
       }
    }
}
