#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateGenerator_LineUpUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C
// 0x0088 (0x04F8 - 0x0470)
class ABP_PirateGenerator_LineUpUI_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_PirateGenerator_LineUp_C*>        Pirates;                                                  // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FCarouselPirateDesc>                 CarouselPirateDescs;                                      // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       LockedPirates;                                            // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRadialCoordinate                           MinBodyShape;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible)
	struct FRadialCoordinate                           MaxBodyShape;                                             // 0x04B8(0x0008) (Edit, BlueprintVisible)
	bool                                               UseIPG;                                                   // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UAnimationDataStoreAsset*                    AnimationAsset;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultAnimationSet;                                      // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCarouselPirateGeneratorParamsAsset*         PirateGeneratorParams;                                    // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfPiratesCurrentlyGenerating;                       // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PirateLineUpInitializedDispatcher;                        // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C");
		return ptr;
	}


	void GetLockStatus(int IndexToToggle, bool* Locked);
	void ToggleLockStatus(int IndexToToggle);
	void ClearLockedPirates();
	void GetTransitionState(bool* Transitioning);
	void GetAnimationDataFromClass(class UClass* Class, class UAD_FrontendPirate_Default_C** AnimationData);
	void SanitizeAnimationPoses();
	void RandomizePirates();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void LineUpPirateInitalized();
	void ExecuteUbergraph_BP_PirateGenerator_LineUpUI(int EntryPoint);
	void PirateLineUpInitializedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
