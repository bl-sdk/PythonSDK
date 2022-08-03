#include <stdafx.h>

#ifndef UE4
	#include "UnrealEngine/Core/UE3/Core_classes.h"
	#include "UnrealEngine/Engine/UE3/Engine_classes.h"
#else
	#include "UnrealEngine/Core/UE4/UE4CoreClasses.h"
	#include "UnrealEngine/Engine/UE4/UE4EngineClasses.h"
#endif

template <>
struct FStruct FHelper::ReadProperty(UStructProperty* prop, int idx) {
	auto addr = reinterpret_cast<uint8_t*>(this) + prop->Offset_Internal;
	return FStruct{prop->GetStruct(), addr};
}

template <>
struct UObject* FHelper::ReadProperty(UObjectProperty* prop, int idx) {
	auto addr = reinterpret_cast<uint8_t*>(this) + prop->Offset_Internal;
	return *reinterpret_cast<UObject **>(addr);
}


template struct FStruct FHelper::ReadProperty(UStructProperty*, int);
template struct UObject* FHelper::ReadProperty(UObjectProperty*, int);
