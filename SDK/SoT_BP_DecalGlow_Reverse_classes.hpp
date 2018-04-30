#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlow_Reverse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C
// 0x0038 (0x04B0 - 0x0478)
class ABP_DecalGlow_Reverse_C : public ALandmarkReactionActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DecalMaterials;                                           // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Reveal_Duration;                                          // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class ABP_StepsTrigger_C*                          StepsTriggerActor;                                        // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_DecalGlow_Longer_C*                      StarterActor;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C");
		return ptr;
	}


	void StartGlowEffect();
	bool StartReaction();
	bool StopReaction();
	void CollectDecalMaterials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DecalGlow_Reverse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif