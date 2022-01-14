// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include <Runtime/Core/Public/Modules/ModuleManager.h>

DECLARE_LOG_CATEGORY_EXTERN(UEBOIDS, Log, All);


class FUEBOIDSModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};