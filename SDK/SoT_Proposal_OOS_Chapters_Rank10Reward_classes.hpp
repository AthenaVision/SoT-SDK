#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_OOS_Chapters_Rank10Reward_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_OOS_Chapters_Rank10Reward.Proposal_OOS_Chapters_Rank10Reward_C
// 0x0000 (0x0138 - 0x0138)
class UProposal_OOS_Chapters_Rank10Reward_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Proposal_OOS_Chapters_Rank10Reward.Proposal_OOS_Chapters_Rank10Reward_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif