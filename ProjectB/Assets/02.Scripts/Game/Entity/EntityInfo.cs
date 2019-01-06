using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class EntityInfo
{
    /** 엔티티 ID */
    public int EntityID { get; set; }
    /** TID */
    public int EntityTID { get; set; }
    /** 엔티티 타입 */
    public E_EntityType EntityType { get; set; }
    /** 엔티티 스프라이트*/
    public Sprite EntitySprite { get; set; }
    
    public void SetInfo(E_EntityType Type, int InEntityTID)
    {
        EntityType = Type;
        EntityTID = InEntityTID;
    }
}
