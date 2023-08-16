#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x120 - 0x38)
// Class OnlineSubsystemValeria.OSSVAL_IdentitySettings
class UOSSVAL_IdentitySettings : public UDeveloperSettings
{
public:
	float                                        RefreshFrequencySeconds;                           // 0x38(0x4)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RefreshTokenTTLFactorForRefreshing;                // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthenticationEndpointUrl;                         // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthenticationApplicationId;                       // 0x50(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthenticationSecretKey;                           // 0x60(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AuthTokenRetry_BaseIntervalSeconds;                // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AuthTokenRetry_MaximumIntervalSansJitterSeconds;   // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LoginGenericErrorText;                             // 0x78(0x18)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                  LoginAccessNotEligibleText;                        // 0x90(0x18)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                  LoginAccessOfflineText;                            // 0xA8(0x18)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                  LoginAccountInfoMissingText;                       // 0xC0(0x18)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                  LoginPasswordEmptyText;                            // 0xD8(0x18)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                  LoginSystemOverwhelmedText;                        // 0xF0(0x18)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                  LoginCredentialErrorText;                          // 0x108(0x18)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_IdentitySettings");

		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class OnlineSubsystemValeria.OSSVAL_PresenceSettings
class UOSSVAL_PresenceSettings : public UDeveloperSettings
{
public:
	float                                        GetStatusesUpdateInterval;                         // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostStatusUpdateInterval;                          // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_PresenceSettings");

		return Clss;
	}

};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy
class UOSSVAL_GetCharacterNamesByAccountIdProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_26B6[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_GetCharacterNamesByAccountIdProxy");

		return Clss;
	}

	void OnGetCharacterNames_Success__DelegateSignature(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);
	void OnGetCharacterNames_Fail__DelegateSignature(struct FGuid& AccountId);
	class UOSSVAL_GetCharacterNamesByAccountIdProxy* GetCharacterNamesByAccountId(class UObject* WorldContextObject, struct FGuid& AccountId);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy
class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_26CB[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy");

		return Clss;
	}

	void OnGetCharacterNames_Success__DelegateSignature(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Name);
	void OnGetCharacterNames_Fail__DelegateSignature(struct FGuid& AccountId, struct FGuid& CharacterId);
	class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* GetCharacterNameByAccountIdAndCharacterId(class UObject* WorldContextObject, struct FGuid& AccountId, struct FGuid& CharacterId);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy
class UOSSVAL_GetCharacterNameByCharacterIdProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_26D2[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_GetCharacterNameByCharacterIdProxy");

		return Clss;
	}

	void OnFetchCharacter_Success__DelegateSignature(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter);
	void OnFetchCharacter_Failure__DelegateSignature(struct FGuid& CharacterId);
	class UOSSVAL_GetCharacterNameByCharacterIdProxy* GetCharacterNameByCharacterId(class UObject* WorldContextObject, struct FGuid& CharacterId);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy
class UOSSVAL_GetNetIdByCharacterIdProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E9[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_GetNetIdByCharacterIdProxy");

		return Clss;
	}

	void OnFetchNetId_Success__DelegateSignature(struct FGuid& CharacterId, struct FUniqueNetIdRepl& FetchedNetId);
	void OnFetchNetId_Failure__DelegateSignature(struct FGuid& CharacterId);
	class UOSSVAL_GetNetIdByCharacterIdProxy* GetNetIdByCharacterId(class UObject* WorldContextObject, struct FGuid& CharacterId);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemValeria.OSSVAl_ChatLibrary
class UOSSVAl_ChatLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAl_ChatLibrary");

		return Clss;
	}

};

// 0x0 (0x188 - 0x188)
// Class OnlineSubsystemValeria.OSSVAL_OnlineEngineInterfaceImpl
class UOSSVAL_OnlineEngineInterfaceImpl : public UOnlineEngineInterfaceImpl
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_OnlineEngineInterfaceImpl");

		return Clss;
	}

};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId
class UOSSVAL_AsyncActionGetCharactersByAccountId : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_26FA[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_AsyncActionGetCharactersByAccountId");

		return Clss;
	}

	void OnGetCharactersObtained__DelegateSignature(TArray<struct FVALDTOS_MetaCharacterFormat>& CharactersFound);
	void OnGetCharactersFailed__DelegateSignature();
	class UOSSVAL_AsyncActionGetCharactersByAccountId* GetCharactersByAccountId(class ULocalPlayer* LocalPlayer, struct FGuid& ID);
};

// 0x20 (0x340 - 0x320)
// Class OnlineSubsystemValeria.OSSVAL_BeaconClient
class AOSSVAL_BeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_2704[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_BeaconClient");

		return Clss;
	}

	void RpcServer_ValidateTicket(struct FGuid& RequestId, struct FOSSVAL_MatchmakingTicket& Ticket, struct FOSSVAL_MatchmakingTicketContext& Context);
	void RpcClient_SendTicketValidationResponse(struct FGuid& RequestId, bool bAccepted, struct FOSSVAL_MatchmakingTicket& Ticket, struct FOSSVAL_MatchmakingTicketContext& Context);
};

// 0x0 (0x3D0 - 0x3D0)
// Class OnlineSubsystemValeria.OSSVAL_BeaconHost
class AOSSVAL_BeaconHost : public AOnlineBeaconHost
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_BeaconHost");

		return Clss;
	}

};

// 0x48 (0x300 - 0x2B8)
// Class OnlineSubsystemValeria.OSSVAL_BeaconHostObject
class AOSSVAL_BeaconHostObject : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_2708[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OSSVAL_BeaconHostObject");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemValeria.ValeriaOnlineBlueprintFunctions
class UValeriaOnlineBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ValeriaOnlineBlueprintFunctions");

		return Clss;
	}

	struct FBlueprintSessionResult CreateSessionResult(const class FString& ServerName, const class FString& Addr);
};

// 0x0 (0xA0 - 0xA0)
// Class OnlineSubsystemValeria.ValeriaPartyBeaconState
class UValeriaPartyBeaconState : public UPartyBeaconState
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ValeriaPartyBeaconState");

		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif