// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MermaidGem_ItemInfo_Ruby_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MermaidGem_ItemInfo_Ruby.BP_MermaidGem_ItemInfo_Ruby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MermaidGem_ItemInfo_Ruby_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MermaidGem_ItemInfo_Ruby.BP_MermaidGem_ItemInfo_Ruby_C.UserConstructionScript");

	ABP_MermaidGem_ItemInfo_Ruby_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif