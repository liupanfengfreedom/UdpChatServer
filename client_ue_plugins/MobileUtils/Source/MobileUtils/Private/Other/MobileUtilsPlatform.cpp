// Mobile Utils Plugin
// Created by Patryk Stepniewski
// Copyright (c) 2014-2019 gameDNA Ltd. All Rights Reserved.

#include "MobileUtilsPlatform.h"

#if !(PLATFORM_ANDROID || PLATFORM_IOS)
FMobileUtilsPlatform::FMobileUtilsPlatform()
{
}

FMobileUtilsPlatform::~FMobileUtilsPlatform()
{
}

void FMobileUtilsPlatform::SetOrientation(int orientation)
{
}

void FMobileUtilsPlatform::StartActivity(const FString& activity)
{
}

void FMobileUtilsPlatform::DispatchMessage(int message, const JsonSharedPtr jsonObject)
{
}

FString FMobileUtilsPlatform::ConvertToAbsolutePath(const FString& path)
{
	return IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*path);
}
#endif
