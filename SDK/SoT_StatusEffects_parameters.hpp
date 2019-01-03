#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StatusEffects.LightweightStatusEffectManagerComponent.OnRep_ActiveEffects
struct ULightweightStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<struct FActiveStatusEffect>                 OldEffects;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
struct UStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<struct FActiveStatusEffect>                 OldEffects;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif