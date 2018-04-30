#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HullDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C
// 0x0094 (0x063C - 0x05A8)
class ABP_HullDamage_C : public AHullDamage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHitReactionComponent*                       HitReaction;                                              // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBakedDecalComponent*                        ImpactDecalComponent;                                     // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          Persistent_Damage_Decals;                                 // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             Damage_VFX;                                               // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstance*>                   Deferred_Damage_Decals;                                   // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Deferred_Min_Size;                                        // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Deferred_Max_Size;                                        // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Persistent_Min_Size;                                      // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Persistent_Max_Size;                                      // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomDecalStream;                                        // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TEST_HitStrength;                                         // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TEST_PenetrationThreshold;                                // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AShip*                                       ParentShip;                                               // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FWwiseEmitter                               CannonballHitEmitter;                                     // 0x0618(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TEST_HitLevel;                                            // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C");
		return ptr;
	}


	void Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal);
	void PlayHitSFX(const struct FVector& HitLocation, float HitStrenght);
	void Apply_Visual_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool HasDecal, class UDecalComponent** Decal);
	void Process_Hit(class UClass* DamagerType, const struct FVector& HitPosition, const struct FVector& HitNormal, const struct FVector& HitVelocity, int NumDamageZones);
	void Scale_Hit_Strength_and_Get_Decal_Flag(const struct FVector& Hit_Normal, const struct FVector& Hit_Velocity, float Hit_Strength, float* Strength, bool* HasDecal);
	void Get_Random_Deferred_Decal(class UMaterialInterface** Decal_Material);
	void Get_Random_Persistent_Decal(class UTexture2D** Decal_Texture);
	void Add_Hit_To_HitList(const struct FVector& HitPosition, const struct FVector& Hit_Normal, float HitStrength, bool HasDecal, class AActor* DamageZone, int HitLevel);
	void Initialize_Damage_Materials(TArray<class UStaticMeshComponent*>* StaticMeshes);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(const struct FImpactDamageEvent& ImpactDamageEvent);
	void ExecuteUbergraph_BP_HullDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif