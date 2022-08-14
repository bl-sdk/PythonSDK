#pragma once

#include "stdafx.h"
#include <map>

#include "UnrealEngine\Core\UE3\Core_classes.h"
#include "UnrealEngine/Engine/UE3/Engine_classes.h"

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

		{"Factory", &typeid(UFactory)},
		{"FloatAttributeProperty", &typeid(UFloatAttributeProperty)},
		{"IntAttributeProperty", &typeid(UIntAttributeProperty)},
		{"HelpCommandlet", &typeid(UHelpCommandlet)},
		{"Linker", &typeid(ULinker)},
		{"LinkerSave", &typeid(ULinkerSave)},
		{"ObjectSerializer", &typeid(UObjectSerializer)},
		{"State", &typeid(UState)},
		{"Subsystem", &typeid(USubsystem)},
		{"AttributeModifier", &typeid(UAttributeModifier)},
		{"TextBufferFactory", &typeid(UTextBufferFactory)}
	#endif
};
