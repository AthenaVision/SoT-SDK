#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipStorageBarrel_Food_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShipStorageBarrel_Food.BP_SmallShipStorageBarrel_Food_C
// 0x0008 (0x0638 - 0x0630)
class ABP_SmallShipStorageBarrel_Food_C : public AShipStorageContainer
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShipStorageBarrel_Food.BP_SmallShipStorageBarrel_Food_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif