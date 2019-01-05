using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodBuilder : EntityBase
{
    public ProductBase[] Foods = new ProductBase[5];
    private float[] FoodCurGauges = new float[5];
     
    private float PlayerGauge = 0;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void TouchSlot01()
    {
        AddGauge(0);
    }

    public void TouchSlot02()
    {
        AddGauge(1);
    }

    public void TouchSlot03()
    {
        AddGauge(2);
    }

    public void TouchSlot04()
    {
        AddGauge(3);
    }

    public void TouchSlot05()
    {
        AddGauge(4);
    }

    void AddGauge(int InSlotNum)
    {
        ProductBase Food = Foods[InSlotNum];
        FoodCurGauges[InSlotNum] += PlayerGauge;

        // 최대 게이지 보다 현재 게이지가 높다면 스폰하고 다시 현재 게이지를 0으로 만든다.
        if(Food.MaxGauge <= FoodCurGauges[InSlotNum])
        {
            FoodCurGauges[InSlotNum] = 0;
            //EntityManager.GetInstance().SpawnEntity(Food);
        }
    }
}
