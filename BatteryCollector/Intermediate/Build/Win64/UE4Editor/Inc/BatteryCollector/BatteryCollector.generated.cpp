// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "BatteryCollector.h"
#include "BatteryCollector.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BatteryCollector() {}
FName BATTERYCOLLECTOR_PowerChangeEffect = FName(TEXT("PowerChangeEffect"));
FName BATTERYCOLLECTOR_WasCollected = FName(TEXT("WasCollected"));
	void ABatteryCollectorCharacter::PowerChangeEffect()
	{
		ProcessEvent(FindFunctionChecked(BATTERYCOLLECTOR_PowerChangeEffect),NULL);
	}
	void ABatteryCollectorCharacter::StaticRegisterNativesABatteryCollectorCharacter()
	{
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorCharacter::StaticClass(), "CollectPickUps",(Native)&ABatteryCollectorCharacter::execCollectPickUps);
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorCharacter::StaticClass(), "GetCurrentPower",(Native)&ABatteryCollectorCharacter::execGetCurrentPower);
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorCharacter::StaticClass(), "GetInitialPower",(Native)&ABatteryCollectorCharacter::execGetInitialPower);
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorCharacter::StaticClass(), "UpdatePower",(Native)&ABatteryCollectorCharacter::execUpdatePower);
	}
	IMPLEMENT_CLASS(ABatteryCollectorCharacter, 2641122951);
	void ABatteryCollectorGameMode::StaticRegisterNativesABatteryCollectorGameMode()
	{
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorGameMode::StaticClass(), "GetPowerToWin",(Native)&ABatteryCollectorGameMode::execGetPowerToWin);
	}
	IMPLEMENT_CLASS(ABatteryCollectorGameMode, 309381292);
	void APickUp::WasCollected()
	{
		ProcessEvent(FindFunctionChecked(BATTERYCOLLECTOR_WasCollected),NULL);
	}
	void APickUp::StaticRegisterNativesAPickUp()
	{
		FNativeFunctionRegistrar::RegisterFunction(APickUp::StaticClass(), "IsActive",(Native)&APickUp::execIsActive);
		FNativeFunctionRegistrar::RegisterFunction(APickUp::StaticClass(), "SetActive",(Native)&APickUp::execSetActive);
		FNativeFunctionRegistrar::RegisterFunction(APickUp::StaticClass(), "WasCollected",(Native)&APickUp::execWasCollected);
	}
	IMPLEMENT_CLASS(APickUp, 221659836);
	void ABatteryPickUp::StaticRegisterNativesABatteryPickUp()
	{
	}
	IMPLEMENT_CLASS(ABatteryPickUp, 493154455);
	void ASpawnVolume::StaticRegisterNativesASpawnVolume()
	{
		FNativeFunctionRegistrar::RegisterFunction(ASpawnVolume::StaticClass(), "GetRandomPointsInVolume",(Native)&ASpawnVolume::execGetRandomPointsInVolume);
	}
	IMPLEMENT_CLASS(ASpawnVolume, 3748304349);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	UMG_API class UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();

	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickUps();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorCharacter();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorGameMode();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_APickUp_IsActive();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_APickUp_SetActive();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_APickUp_WasCollected();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_APickUp_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_APickUp();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryPickUp_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryPickUp();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointsInVolume();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASpawnVolume();
	BATTERYCOLLECTOR_API class UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickUps()
	{
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CollectPickUps"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PickUps"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when we press a key to collect any pickups inside the collection sphere"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower()
	{
		struct BatteryCollectorCharacter_eventGetCurrentPower_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14020401, 65535, sizeof(BatteryCollectorCharacter_eventGetCurrentPower_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorCharacter_eventGetCurrentPower_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Accessor function for current power"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower()
	{
		struct BatteryCollectorCharacter_eventGetInitialPower_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetInitialPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14020401, 65535, sizeof(BatteryCollectorCharacter_eventGetInitialPower_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorCharacter_eventGetInitialPower_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Accessor function for intial power"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect()
	{
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PowerChangeEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08080800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower()
	{
		struct BatteryCollectorCharacter_eventUpdatePower_Parms
		{
			float PowerChange;
		};
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdatePower"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(BatteryCollectorCharacter_eventUpdatePower_Parms));
			UProperty* NewProp_PowerChange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PowerChange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PowerChange, BatteryCollectorCharacter_eventUpdatePower_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to update the characters power\n* param PowerChange - This is the ammount to change the power by - can be positive or negative"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister()
	{
		return ABatteryCollectorCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = ABatteryCollectorCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickUps());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CharacterPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CharacterPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CharacterPower, ABatteryCollectorCharacter), 0x0040000000020001);
				UProperty* NewProp_BaseSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseSpeed, ABatteryCollectorCharacter), 0x0020080000000005);
				UProperty* NewProp_SpeedFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpeedFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpeedFactor, ABatteryCollectorCharacter), 0x0020080000000005);
				UProperty* NewProp_InitialPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InitialPower, ABatteryCollectorCharacter), 0x0020080000000005);
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, ABatteryCollectorCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, ABatteryCollectorCharacter), 0x0010000000020015);
				UProperty* NewProp_CollectionSphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollectionSphere"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollectionSphere, ABatteryCollectorCharacter), 0x00400000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, ABatteryCollectorCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ABatteryCollectorCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickUps(), "CollectPickUps"); // 3652173519
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower(), "GetCurrentPower"); // 1388613022
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower(), "GetInitialPower"); // 1946302318
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect(), "PowerChangeEffect"); // 3445504088
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower(), "UpdatePower"); // 911025341
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_CharacterPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_CharacterPower, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CharacterPower, TEXT("ToolTip"), TEXT("Current Power level of the character"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("ToolTip"), TEXT("Speed when power level is 0"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("ToolTip"), TEXT("Multiplier for character speed"));
				MetaData->SetValue(NewProp_InitialPower, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_InitialPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_InitialPower, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_InitialPower, TEXT("ToolTip"), TEXT("Starting power level of character"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ToolTip"), TEXT("Collection sphere"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorCharacter(Z_Construct_UClass_ABatteryCollectorCharacter, &ABatteryCollectorCharacter::StaticClass, TEXT("ABatteryCollectorCharacter"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorCharacter);
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin()
	{
		struct BatteryCollectorGameMode_eventGetPowerToWin_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPowerToWin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(BatteryCollectorGameMode_eventGetPowerToWin_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorGameMode_eventGetPowerToWin_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns power needed to win - Required by HUD"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = ABatteryCollectorGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2088028C;

				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurrentWidget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentWidget, ABatteryCollectorGameMode), 0x0020080000000000, Z_Construct_UClass_UUserWidget_NoRegister());
				UProperty* NewProp_HUDWidgetClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HUDWidgetClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(HUDWidgetClass, ABatteryCollectorGameMode), 0x0024080000010005, Z_Construct_UClass_UUserWidget_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_PowerToWin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PowerToWin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PowerToWin, ABatteryCollectorGameMode), 0x0020080000010005);
				UProperty* NewProp_DecayRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DecayRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DecayRate, ABatteryCollectorGameMode), 0x0020080000010005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin(), "GetPowerToWin"); // 3803657417
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ToolTip"), TEXT("The Instance of the HUD"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("ToolTip"), TEXT("The Widget class to use for the HUD"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("ToolTip"), TEXT("The power needed to win the game"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("ToolTip"), TEXT("The rate the character loses power"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorGameMode(Z_Construct_UClass_ABatteryCollectorGameMode, &ABatteryCollectorGameMode::StaticClass, TEXT("ABatteryCollectorGameMode"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorGameMode);
	UFunction* Z_Construct_UFunction_APickUp_IsActive()
	{
		struct PickUp_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_APickUp();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14020401, 65535, sizeof(PickUp_eventIsActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, PickUp_eventIsActive_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, PickUp_eventIsActive_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, PickUp_eventIsActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PickUp.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Return if the pickup is active"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickUp_SetActive()
	{
		struct PickUp_eventSetActive_Parms
		{
			bool NewPickUpState;
		};
		UObject* Outer=Z_Construct_UClass_APickUp();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(PickUp_eventSetActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(NewPickUpState, PickUp_eventSetActive_Parms, bool);
			UProperty* NewProp_NewPickUpState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewPickUpState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(NewPickUpState, PickUp_eventSetActive_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(NewPickUpState, PickUp_eventSetActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PickUp.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Allows other classes to saftly change whether or not the pickup is active"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickUp_WasCollected()
	{
		UObject* Outer=Z_Construct_UClass_APickUp();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WasCollected"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PickUp.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to call when the pickup is collected"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickUp_NoRegister()
	{
		return APickUp::StaticClass();
	}
	UClass* Z_Construct_UClass_APickUp()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = APickUp::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_APickUp_IsActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickUp_SetActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickUp_WasCollected());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PickUpMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickUpMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PickUpMesh, APickUp), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickUp_IsActive(), "IsActive"); // 4128623409
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickUp_SetActive(), "SetActive"); // 4213752938
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickUp_WasCollected(), "WasCollected"); // 2483553317
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PickUp.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PickUp.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_PickUpMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_PickUpMesh, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_PickUpMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PickUpMesh, TEXT("ModuleRelativePath"), TEXT("PickUp.h"));
				MetaData->SetValue(NewProp_PickUpMesh, TEXT("ToolTip"), TEXT("Static Mesh to repesent the pickup in the level"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUp(Z_Construct_UClass_APickUp, &APickUp::StaticClass, TEXT("APickUp"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUp);
	UClass* Z_Construct_UClass_ABatteryPickUp_NoRegister()
	{
		return ABatteryPickUp::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryPickUp()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APickUp();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = ABatteryPickUp::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BatteryPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BatteryPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BatteryPower, ABatteryPickUp), 0x0020080000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryPickUp.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryPickUp.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_BatteryPower, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_BatteryPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_BatteryPower, TEXT("ModuleRelativePath"), TEXT("BatteryPickUp.h"));
				MetaData->SetValue(NewProp_BatteryPower, TEXT("ToolTip"), TEXT("Set the amount of power the battery giveds to the player"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPickUp(Z_Construct_UClass_ABatteryPickUp, &ABatteryPickUp::StaticClass, TEXT("ABatteryPickUp"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickUp);
	UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointsInVolume()
	{
		struct SpawnVolume_eventGetRandomPointsInVolume_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ASpawnVolume();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRandomPointsInVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14820401, 65535, sizeof(SpawnVolume_eventGetRandomPointsInVolume_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SpawnVolume_eventGetRandomPointsInVolume_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Spawning"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Find a random point with in the box"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
	{
		return ASpawnVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpawnVolume()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = ASpawnVolume::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASpawnVolume_GetRandomPointsInVolume());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_WhereToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WhereToSpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WhereToSpawn, ASpawnVolume), 0x00400000000a001d, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_SpawnDelayRangeHigh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpawnDelayRangeHigh"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpawnDelayRangeHigh, ASpawnVolume), 0x0020080000000005);
				UProperty* NewProp_SpawnDelayRangeLow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpawnDelayRangeLow"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpawnDelayRangeLow, ASpawnVolume), 0x0020080000000005);
				UProperty* NewProp_WhatToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WhatToSpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(WhatToSpawn, ASpawnVolume), 0x0024080000000001, Z_Construct_UClass_APickUp_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASpawnVolume_GetRandomPointsInVolume(), "GetRandomPointsInVolume"); // 3192775651
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("ToolTip"), TEXT("Box Component to specify where should be spawned"));
				MetaData->SetValue(NewProp_SpawnDelayRangeHigh, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_SpawnDelayRangeHigh, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_SpawnDelayRangeHigh, TEXT("ToolTip"), TEXT("Maximum spawn delay"));
				MetaData->SetValue(NewProp_SpawnDelayRangeLow, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_SpawnDelayRangeLow, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_SpawnDelayRangeLow, TEXT("ToolTip"), TEXT("Minimun spawn delay"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("ToolTip"), TEXT("The pickup to spawn"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnVolume(Z_Construct_UClass_ASpawnVolume, &ASpawnVolume::StaticClass, TEXT("ASpawnVolume"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
	UPackage* Z_Construct_UPackage__Script_BatteryCollector()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/BatteryCollector")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xC44B477E;
			Guid.B = 0x6DFBA990;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
