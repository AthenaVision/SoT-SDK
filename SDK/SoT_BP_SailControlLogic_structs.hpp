#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ESailAnimationState_classes.hpp"
#include "SoT_ESailAnimationType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_SailControlLogic.BP_SailControlLogic
// 0x0028
struct FBP_SailControlLogic
{
	TEnumAsByte<ESailAnimationState>                   AnimationState_2_A894C26649ECBE3FBD6228BDDC37EB65;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESailAnimationType>                    AnimationType_6_A5A9A1834A5EED128AD5B2BBA55543D2;         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CharacterTilt_9_13AA56C74F74105772036694BE91FD98;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RaiseSpeed_12_6EF4929B4EC1228D517125B192E9E1AF;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RopeAngle_15_D520B5FA438A890BD144A0B039DDEAB5;            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RaisedPercentage_18_E401BB3F41590653A352BAA1C52C8244;     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateState_20_B787D86B4CCDF55E2F08968D83EA750D;          // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              CharacterPitch_23_CB11430647B1CE3FAAC7E4AB69847A6D;       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed_26_458EDF2C4E96984F5D630BAC0F17C26C;        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReleaseRopeOverride_32_A0E655414212F524965045A312A6C8F7;  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              HandGrab_39_CD15998043D739739FBDB0A201EF9F1D;             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
