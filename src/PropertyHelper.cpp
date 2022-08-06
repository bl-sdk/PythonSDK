#include <stdafx.h>

#ifndef UE4
#include "UnrealEngine/Core/UE3/Core_classes.h"
#include "UnrealEngine/Engine/UE3/Engine_classes.h"
#else
#include "UnrealEngine/Core/UE4/UE4CoreClasses.h"
#include "UnrealEngine/Engine/UE4/UE4EngineClasses.h"
#endif

void* PropertyHelper::GetPropertyAddress(UProperty* prop, size_t idx) {
	return reinterpret_cast<uint8_t*>(this) + prop->Offset_Internal + (idx * prop->ElementSize);
}

#pragma region ReadProperty

template <>
struct FStruct PropertyHelper::ReadProperty(UStructProperty* prop, size_t idx) {
	return FStruct{prop->GetStruct(), this->GetPropertyAddress(prop, idx)};
}

template <>
struct FString* PropertyHelper::ReadProperty(UStrProperty* prop, size_t idx) {
	return reinterpret_cast<FString*>(this->GetPropertyAddress(prop, idx));
}

template <>
struct UObject* PropertyHelper::ReadProperty(UObjectProperty* prop, size_t idx) {
	return *reinterpret_cast<UObject**>(this->GetPropertyAddress(prop, idx));
}

#ifdef UE3
template <>
struct UComponent* PropertyHelper::ReadProperty(UComponentProperty* prop, size_t idx) {
	return *reinterpret_cast<UComponent**>(this->GetPropertyAddress(prop, idx));
}
#endif

template <>
struct UClass* PropertyHelper::ReadProperty(UClassProperty* prop, size_t idx) {
	return *reinterpret_cast<UClass**>(this->GetPropertyAddress(prop, idx));
}

template <>
struct FName* PropertyHelper::ReadProperty(UNameProperty* prop, size_t idx) {
	return reinterpret_cast<FName*>(this->GetPropertyAddress(prop, idx));
}

template <>
int32_t PropertyHelper::ReadProperty(UIntProperty* prop, size_t idx) {
	return *reinterpret_cast<int32_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
struct FScriptInterface* PropertyHelper::ReadProperty(UInterfaceProperty* prop, size_t idx) {
	return reinterpret_cast<FScriptInterface*>(this->GetPropertyAddress(prop, idx));
}

template <>
float_t PropertyHelper::ReadProperty(UFloatProperty* prop, size_t idx) {
	return *reinterpret_cast<float_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
struct FScriptDelegate* PropertyHelper::ReadProperty(UDelegateProperty* prop, size_t idx) {
	return reinterpret_cast<FScriptDelegate*>(this->GetPropertyAddress(prop, idx));
}

template <>
uint8_t PropertyHelper::ReadProperty(UByteProperty* prop, size_t idx) {
	return *reinterpret_cast<uint8_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
bool PropertyHelper::ReadProperty(UBoolProperty* prop, size_t idx) {
	// Pretty sure this is an engine limitation, so we'll never actually run into it
	if (idx != 0) {
		throw std::out_of_range("BoolProperty arrays are not supported!");
	}
	auto bitfield = this->ReadProperty<UIntProperty>(reinterpret_cast<UIntProperty*>(prop), idx);
	return (bitfield & prop->GetMask()) != 0;
}

template <>
struct FArray PropertyHelper::ReadProperty(UArrayProperty* prop, size_t idx) {
	const auto array = reinterpret_cast<TArray<uint8_t>*>(this->GetPropertyAddress(prop, idx));
	return FArray{array, prop->GetInner()};
}

#if UE4
template <>
std::wstring PropertyHelper::ReadProperty(UTextProperty* prop, size_t idx) {
	auto addr = this->GetPropertyAddress(prop, idx);
	auto text = reinterpret_cast<FText*>(addr);

	FString* str = text->GetFString();
	if (str != nullptr) {
		return std::wstring(str->AsString());
	} else {
		return std::wstring();
	}
}

template <>
struct UObject* PropertyHelper::ReadProperty(UWeakObjectProperty* prop, size_t idx) {
	auto weakObjPtr = *reinterpret_cast<TWeakObjectPtr<>*>(GetPropertyAddress(prop, idx));
	return weakObjPtr.GetObjectPtr();
}

template <>
struct FSoftObject<UObject> PropertyHelper::ReadProperty(USoftObjectProperty* prop, size_t idx) {
	auto softObjPtr = *reinterpret_cast<FSoftObjectPtr*>(GetPropertyAddress(prop, idx));
	auto obj = softObjPtr.WeakPtr.Get();
	auto path = (std::string)softObjPtr.ObjectID.AssetPathName;
	return FSoftObject<UObject>{obj, path};
}

template <>
struct FSoftObject<UClass> PropertyHelper::ReadProperty(USoftClassProperty* prop, size_t idx) {
	auto softObjPtr = *reinterpret_cast<FSoftObjectPtr*>(GetPropertyAddress(prop, idx));
	auto obj = static_cast<UClass*>(softObjPtr.WeakPtr.Get());
	auto path = (std::string)softObjPtr.ObjectID.AssetPathName;
	return FSoftObject<UClass>{obj, path};
}

template <>
uint64_t PropertyHelper::ReadProperty(UUInt64Property* prop, size_t idx) {
	return *reinterpret_cast<uint64_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
uint32_t PropertyHelper::ReadProperty(UUInt32Property* prop, size_t idx) {
	return *reinterpret_cast<uint32_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
uint16_t PropertyHelper::ReadProperty(UUInt16Property* prop, size_t idx) {
	return *reinterpret_cast<uint16_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
int8_t PropertyHelper::ReadProperty(UInt8Property* prop, size_t idx) {
	return *reinterpret_cast<int8_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
int64_t PropertyHelper::ReadProperty(UInt64Property* prop, size_t idx) {
	return *reinterpret_cast<int64_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
int16_t PropertyHelper::ReadProperty(UInt16Property* prop, size_t idx) {
	return *reinterpret_cast<int16_t*>(this->GetPropertyAddress(prop, idx));
}

template <>
double_t PropertyHelper::ReadProperty(UDoubleProperty* prop, size_t idx) {
	return *reinterpret_cast<double_t*>(this->GetPropertyAddress(prop, idx));
}
#endif

#pragma endregion

#pragma region WriteProperty

// TODO

#pragma endregion

#pragma region Explicit instantiation

template struct FStruct PropertyHelper::ReadProperty(UStructProperty*, size_t);
template struct FString* PropertyHelper::ReadProperty(UStrProperty*, size_t);
template struct UObject* PropertyHelper::ReadProperty(UObjectProperty*, size_t);
#ifdef UE3
template struct UComponent* PropertyHelper::ReadProperty(UComponentProperty*, size_t);
#endif
template struct UClass* PropertyHelper::ReadProperty(UClassProperty*, size_t);
template struct FName* PropertyHelper::ReadProperty(UNameProperty*, size_t);
template int32_t PropertyHelper::ReadProperty(UIntProperty*, size_t);
template struct FScriptInterface* PropertyHelper::ReadProperty(UInterfaceProperty*, size_t);
template float_t PropertyHelper::ReadProperty(UFloatProperty*, size_t);
template struct FScriptDelegate* PropertyHelper::ReadProperty(UDelegateProperty*, size_t);
template uint8_t PropertyHelper::ReadProperty(UByteProperty*, size_t);
template bool PropertyHelper::ReadProperty(UBoolProperty*, size_t);
template struct FArray PropertyHelper::ReadProperty(UArrayProperty*, size_t);
#ifdef UE4
template std::wstring PropertyHelper::ReadProperty(UTextProperty*, size_t);
template UObject* PropertyHelper::ReadProperty(UWeakObjectProperty*, size_t);
template struct FSoftObject<UObject> PropertyHelper::ReadProperty(USoftObjectProperty*, size_t);
template struct FSoftObject<UClass> PropertyHelper::ReadProperty(USoftClassProperty*, size_t);
template uint64_t PropertyHelper::ReadProperty(UUInt64Property*, size_t);
template uint32_t PropertyHelper::ReadProperty(UUInt32Property*, size_t);
template uint16_t PropertyHelper::ReadProperty(UUInt16Property*, size_t);
template int8_t PropertyHelper::ReadProperty(UInt8Property*, size_t);
template int64_t PropertyHelper::ReadProperty(UInt64Property*, size_t);
template int16_t PropertyHelper::ReadProperty(UInt16Property*, size_t);
template double_t PropertyHelper::ReadProperty(UDoubleProperty*, size_t);
#endif

#pragma endregion
