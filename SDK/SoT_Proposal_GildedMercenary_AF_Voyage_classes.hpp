#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_GildedMercenary_AF_Voyage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_GildedMercenary_AF_Voyage.Proposal_GildedMercenary_AF_Voyage_C
// 0x0000 (0x0138 - 0x0138)
class UProposal_GildedMercenary_AF_Voyage_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_GildedMercenary_AF_Voyage.Proposal_GildedMercenary_AF_Voyage_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif