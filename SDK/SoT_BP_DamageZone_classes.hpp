#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DamageZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamageZone.BP_DamageZone_C
// 0x0090 (0x0868 - 0x07D8)
class ABP_DamageZone_C : public ADamageZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FBP_InternalDamageGroup>             InternalDamageLevels;                                     // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               InternalDamageTags;                                       // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FHullDamageHit>                      Rep_ExternalHitList;                                      // 0x0800(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Repair_Tag;                                               // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_InternalDamageGroup                     RepairGroup;                                              // 0x0818(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UPrimitiveComponent*                         InteractionBox;                                           // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Interaction_Tag;                                          // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExternalHitBufferIndex;                                   // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStoredHits;                                            // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDecalComponent*>                     Deferred_Decals;                                          // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Rep_ServerUpdateEventCount;                               // 0x0850(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClientUpdateEventCount;                                   // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExternalDecalBufferIndex;                                 // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasBeenInitialized;                                       // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	struct FName                                       OneShotTag;                                               // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageZone.BP_DamageZone_C");
		return ptr;
	}


	void GetNumExternalHits(int* NumExternalHits);
	void Initialise();
	void Update_External_Hits();
	void OnRep_Rep_ExternalHitList();
	void Clear_Decal_Flags();
	void Add_Deferred_Decal(class UDecalComponent* Decal);
	void KillDeferredDecal(class UDecalComponent** Decal);
	void RemoveDeferredDecals();
	void Set_Repair_Visibility(bool Visible);
	void Add_External_Hit(const struct FHullDamageHit& HitData);
	void Show_Damage_Level(int DamageLevel);
	void Set_Damage_Level_Visibility(bool Visibility, int Damage_Level);
	void CollectTaggedComponents();
	void UserConstructionScript();
	void AddExternalHit(const struct FHullDamageHit& Hit_Data);
	void ClearDecalFlags();
	void OnDamageLevelUpdate(int* InDamageLevel);
	void OnRepairableStateUpdate(TEnumAsByte<ERepairableState>* InRepairableState);
	void OnInitialise();
	void ExecuteUbergraph_BP_DamageZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif