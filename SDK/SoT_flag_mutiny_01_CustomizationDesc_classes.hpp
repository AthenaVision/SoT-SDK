#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_flag_mutiny_01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass flag_mutiny_01_CustomizationDesc.flag_mutiny_01_CustomizationDesc_C
// 0x0000 (0x00E8 - 0x00E8)
class Uflag_mutiny_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass flag_mutiny_01_CustomizationDesc.flag_mutiny_01_CustomizationDesc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif