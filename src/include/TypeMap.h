#pragma once

#include "stdafx.h"
#include <map>

#if UE3
#include "UnrealEngine\Core\UE3\Core_classes.h"
#elif UE4
#include "UnrealEngine\Core\UE4\UE4CoreClasses.h"
#endif

static std::map<std::string, const std::type_info *> uobject_type_map{
	{"ArrayProperty", &typeid(UArrayProperty)},
	{"BoolProperty", &typeid(UBoolProperty)},
	{"ByteProperty", &typeid(UByteProperty)},
	{"Class", &typeid(UClass)},
	{"ClassProperty", &typeid(UClassProperty)},

	{"DelegateProperty", &typeid(UDelegateProperty)},
	{"Enum", &typeid(UEnum)},
	{"Field", &typeid(UField)},

	{"FloatProperty", &typeid(UFloatProperty)},
	{"Function", &typeid(UFunction)},
	{"InterfaceProperty", &typeid(UInterfaceProperty)},
	{"IntProperty", &typeid(UIntProperty)},
	{"MapProperty", &typeid(UMapProperty)},
	{"NameProperty", &typeid(UNameProperty)},
	{"Object", &typeid(UObject)},
	{"ObjectProperty", &typeid(UObjectProperty)},
	{"Package", &typeid(UPackage)},
	{"Property", &typeid(UProperty)},
	{"ScriptStruct", &typeid(UScriptStruct)},
	{"StrProperty", &typeid(UStrProperty)},
	{"Struct", &typeid(UStruct)},
	{"StructProperty", &typeid(UStructProperty)},

	#ifndef UE4
		{"ByteAttributeProperty", &typeid(UByteAttributeProperty)},
		{"Component", &typeid(UComponent)},
		{"ComponentProperty", &typeid(UComponentProperty)},
		{"Const", &typeid(UConst)},

		{"FloatAttributeProperty", &typeid(UFloatAttributeProperty)},
		{"IntAttributeProperty", &typeid(UIntAttributeProperty)},
		{"State", &typeid(UState)},
	#endif
};
