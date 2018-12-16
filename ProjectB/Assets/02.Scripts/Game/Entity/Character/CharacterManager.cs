using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    void SpawnCharacter(E_CharacterType CharacterType)
    {
       switch(CharacterType)
        {
            case E_CharacterType.MrBunSik:
                {

                } break;
            case E_CharacterType.Guest1:
                break;
            case E_CharacterType.Guest2:
                break;
            default :
            break;
        }
    }
}
