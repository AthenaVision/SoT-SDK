// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShadyGoldHoardersShop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShadyGoldHoardersShop.BP_ShadyGoldHoardersShop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShadyGoldHoardersShop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShadyGoldHoardersShop.BP_ShadyGoldHoardersShop_C.UserConstructionScript");

	ABP_ShadyGoldHoardersShop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif