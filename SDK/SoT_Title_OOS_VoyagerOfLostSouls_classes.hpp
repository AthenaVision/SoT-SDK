#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_OOS_VoyagerOfLostSouls_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_OOS_VoyagerOfLostSouls.Title_OOS_VoyagerOfLostSouls_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_OOS_VoyagerOfLostSouls_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Title_OOS_VoyagerOfLostSouls.Title_OOS_VoyagerOfLostSouls_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif