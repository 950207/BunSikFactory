using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EntityBase : MonoBehaviour {

    /** 엔티티 ID */
    public int EntityID { get; set; }
    /** TID */
    public int EntityTID { get; set; }
    /** 엔티티 타입 */
    public E_EntityType EntityType { get; set; }

    /** 엔티티 데이터 세팅 */
    public void SetEntity(EntityInfo InEntityInfo)
    {
        EntityID = InEntityInfo.EntityID;
        EntityTID = InEntityInfo.EntityTID;
        EntityType = InEntityInfo.EntityType;
    }

    // Use this for initialization
    void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
