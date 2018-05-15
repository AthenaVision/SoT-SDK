// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Audio_Play_Wwise_Event_Function_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_Wwise_Event_Function_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio");

	ABP_Audio_Play_Wwise_Event_Function_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_Wwise_Event_Function_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio");

	ABP_Audio_Play_Wwise_Event_Function_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_Wwise_Event_Function_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript");

	ABP_Audio_Play_Wwise_Event_Function_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
