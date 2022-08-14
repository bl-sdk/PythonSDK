#pragma once

#include "stdafx.h"

#ifndef UE4

#ifndef CORECLASSES_H
#define CORECLASSES_H

#include "gamedefines.h"

#ifdef _MSC_VER
#pragma pack ( push, 0x4 )
#endif

#include "PropertyHelper.h"

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_MAX_OBJECT_PATH_COMPONENTS                         6
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// 0x003C
class UObject
{
public:
	//struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	void*                                              HashNext;                                         		// 0x0004 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	uint64_t                                           ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	void*                                              HashOuterNext;                                    		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	void*                                              StateFrame;                                       		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x0018 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	void*                                              LinkerIndex;                                      		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                InternalIndex;											// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

	static inline TArray< UObject* >* GObjects() {
		const auto objectArray = static_cast<TArray<UObject*>*>(UnrealSDK::pGObjects);
		return objectArray;
	}

	const char *GetName() const;
	std::string GetNameCpp() const;
	std::string GetFullName();
	std::string GetObjectName();
	void DumpObject();
	static UObject* Load(UClass* ClassToLoad, const char* ObjectFullName);
	static UObject* Load(const char* ClassName, const char* ObjectFullName);
	static UObject* Find(UClass* Class, const char* ObjectFullName);
	static UObject* Find(const char* ClassName, const char* ObjectFullName);
	static std::vector<UObject*> FindObjectsRegex(const std::string& RegexString);
	static std::vector<UObject*> FindObjectsContaining(const std::string& StringLookup);
	static UClass* FindClass(const char* ClassName, bool Lookup = false);
	bool IsA(UClass* PClass) const;
	class UPackage* GetPackageObject() const;
	static UClass* StaticClass();
	static std::vector<UObject*> FindAll(char* InStr, bool IncludeSubclasses);

	/**
	 * @brief Gets a property on the object.
	 * @note Always gets the first index of fixed arrays.
	 *
	 * @tparam T The property type.
	 * @param name The name of the property to get.
	 * @return The property's value.
	 */
	template <typename T>
	typename PropInfo<T>::type GetProperty(const std::string& name) {
		return reinterpret_cast<PropertyHelper*>(this)->ReadProperty<T>(
			this->Class->FindAndValidateProperty<T>(name), 0);
	}

	/**
	 * @brief Sets an object property's value.
	 * @note Always sets the first index of fixed arrays.
	 *
	 * @tparam T The property type.
	 * @param name The name of the property to get.
	 * @param val The value to write.
	 */
	template <typename T>
	void SetProperty(const std::string& name, typename PropInfo<T>::type val) {
		return reinterpret_cast<PropertyHelper*>(this)->WriteProperty<T>(
			this->Class->FindAndValidateProperty<T>(name), 0, val);
	}

	/**
	 * @brief Gets the python value for a property on the object.
	 *
	 * @param name The name of the property to get.
	 * @return The property's value.
	 */
	py::object GetPyProperty(const std::string& name);

	/**
	 * @brief Sets an object property's value from a python object.
	 *
	 * @param name The name of the property to set.
	 * @param val The value to set.
	 */
	void SetPyProperty(const std::string& name, py::object val);

	static int GetBuildChangelistNumber();
	static int GetEngineVersion();
	static class UObject* FindObject(const struct FString& ObjectName, class UClass* ObjectClass);
	static class UObject* DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail);
	void SaveConfig();
	// Virtual Functions
	virtual void VirtualFunction00() {};																			// 0x005838A0 (0x00)
	virtual void VirtualFunction01() {};																			// 0x005FC030 (0x04)
	virtual void VirtualFunction02() {};																			// 0x005953C0 (0x08)
	virtual void VirtualFunction03() {};																			// 0x00FBA130 (0x0C)
	virtual void VirtualFunction04() {};																			// 0x01218070 (0x10)
	virtual void VirtualFunction05() {};																			// 0x00F90510 (0x14)
	virtual void VirtualFunction06() {};																			// 0x0073DA00 (0x18)
	virtual void VirtualFunction07() {};																			// 0x0040C150 (0x1C)
	virtual void VirtualFunction08() {};																			// 0x00BD3FF0 (0x20)
	virtual void VirtualFunction09() {};																			// 0x0100ACD0 (0x24)
	virtual void VirtualFunction10() {};																			// 0x005838A0 (0x28)
	virtual void VirtualFunction11() {};																			// 0x008C0E10 (0x2C)
	virtual void VirtualFunction12() {};																			// 0x00F64D40 (0x30)
	virtual void VirtualFunction13() {};																			// 0x009A7490 (0x34)
	virtual void VirtualFunction14() {};																			// 0x00271DD0 (0x38)
	virtual void VirtualFunction15() {};																			// 0x0053CE50 (0x3C)
	virtual void VirtualFunction16() {};																			// 0x00F90510 (0x40)
	virtual void VirtualFunction17() {};																			// 0x00C6EB60 (0x44)
	virtual void VirtualFunction18() {};																			// 0x009CBC30 (0x48)
	virtual void PostEditChangeProperty(void* PropertyChangedEvent) {};							// 0x00AEAFA0 (0x4C)
	virtual void VirtualFunction20() {};																			// 0x00A28430 (0x50)
	virtual void VirtualFunction21() {};																			// 0x00601380 (0x54)
	virtual void VirtualFunction22() {};																			// 0x0048AE50 (0x58)
	virtual void VirtualFunction23() {};																			// 0x005F68F0 (0x5C)
	virtual void VirtualFunction24() {};																			// 0x00F90510 (0x60)
	virtual void VirtualFunction25() {};																			// 0x00F90510 (0x64)
	virtual void VirtualFunction26() {};																			// 0x006B8E90 (0x68)
	virtual void VirtualFunction27() {};																			// 0x0048AE50 (0x6C)
	virtual void VirtualFunction28() {};																			// 0x005F68F0 (0x70)
	virtual void VirtualFunction29() {};																			// 0x0048AE50 (0x74)
	virtual void VirtualFunction30() {};																			// 0x005F68F0 (0x78)
	virtual void VirtualFunction31() {};																			// 0x00C611D0 (0x7C)
	virtual void VirtualFunction32() {};																			// 0x0041D5C0 (0x80)
	virtual void VirtualFunction33() {};																			// 0x0108A6C0 (0x84)
	virtual void VirtualFunction34() {};																			// 0x00F90510 (0x88)
	virtual void VirtualFunction35() {};																			// 0x009F3B90 (0x8C)
	virtual void VirtualFunction36() {};																			// 0x00ADAF50 (0x90)
	virtual void VirtualFunction37() {};																			// 0x0080C1C0 (0x94)
	virtual void VirtualFunction38() {};																			// 0x00BFA410 (0x98)
	virtual void VirtualFunction39() {};																			// 0x0048D800 (0x9C)
	virtual void VirtualFunction40() {};																			// 0x00186780 (0xA0)
	virtual void VirtualFunction41() {};																			// 0x00556B50 (0xA4)
	virtual void VirtualFunction42() {};																			// 0x00186780 (0xA8)
	virtual void VirtualFunction43() {};																			// 0x00EA93F0 (0xAC)
	virtual void VirtualFunction44() {};																			// 0x00EA93F0 (0xB0)
	virtual void VirtualFunction45() {};																			// 0x00F90510 (0xB4)
	virtual void VirtualFunction46() {};																			// 0x00186780 (0xB8)
	virtual void VirtualFunction47() {};																			// 0x0094CB90 (0xBC)
	virtual void VirtualFunction48() {};																			// 0x00BC6F40 (0xC0)
	virtual void VirtualFunction49() {};																			// 0x00525190 (0xC4)
	virtual void VirtualFunction50() {};																			// 0x00B01BC0 (0xC8)
	virtual void VirtualFunction51() {};																			// 0x01218070 (0xCC)
	virtual void VirtualFunction52() {};																			// 0x01218070 (0xD0)
	virtual void VirtualFunction53() {};																			// 0x00EA93F0 (0xD4)
	virtual void VirtualFunction54() {};																			// 0x00FA4230 (0xD8)
	virtual void VirtualFunction55() {};																			// 0x0020B6A0 (0xDC)
	virtual void VirtualFunction56() {};																			// 0x00F883C0 (0xE0)
	virtual void VirtualFunction57() {};																			// 0x00186780 (0xE4)
	virtual void VirtualFunction58() {};																			// 0x00D28B70 (0xE8)
	virtual void VirtualFunction59() {};																			// 0x00D57990 (0xEC)
	virtual void VirtualFunction60() {};																			// 0x00676A60 (0xF0)
	virtual void VirtualFunction61() {};																			// 0x00186780 (0xF4)
	virtual void VirtualFunction62() {};																			// 0x00B05370 (0xF8)
	virtual void VirtualFunction63() {};																			// 0x00896B70 (0xFC)
	virtual void VirtualFunction64() {};																			// 0x0028AA90 (0x100)
	virtual void VirtualFunction65() {};																			// 0x00EE7430 (0x104)
	virtual void VirtualFunction66() {};																			// 0x00592990 (0x108)
	virtual void ProcessEvent(class UFunction* pFunction, void* params, void* pResult = NULL) {};					// 0x00F757C0 (0x10C)
};

struct FScriptDelegate
{
	struct FName FunctionName;
	class UObject* Object;
};

struct FScriptInterface
{
	UObject* ObjectPointer; //A pointer to a UObject that implements a native interface.
	void* InterfacePointer;
	//Pointer to the location of the interface object within the UObject referenced by ObjectPointer.
};

// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject {

};

// 0x0004 (0x0040 - 0x003C)
class UField : public UObject {
public:
	class UField* Next;                                             		// NOT AUTO-GENERATED PROPERTY
};

// 0x0040 (0x0080 - 0x0040)
class UProperty : public UField
{
public:
	int					ArrayDim;
	int					ElementSize;
	unsigned int		PropertyFlags;
	unsigned char		UnknownData00[0x14];
	int					Offset_Internal;
	UProperty* PropertyLinkNext;
	unsigned char		UnknownData01[0x18];
};

// 0x004C (0x008C - 0x0040)
class UStruct : public UField
{
public:
	unsigned char			UnknownData00[0x8];

	class UStruct*			SuperField;
	class UField*			Children;

	unsigned short			PropertySize;
	char					UnknownData01[0x3A];

	UObject* FindChildByName(FName InName) const
	{
		const UStruct *thisField = this;
		while (thisField)
		{
			for (UField* Child = thisField->Children; Child != NULL; Child = Child->Next)
				if (Child->Name == InName)
					return Child;
			thisField = thisField->SuperField;
		}

		return NULL;
	}

	/**
	 * @brief Finds a child property, and validates that it's of the expected type.
	 * @note Throws exceptions if the child is not found of of an invalid type.
	 *
	 * @tparam T The expected property type.
	 * @param name The name of the property.
	 * @return The found property object.
	 */
	template <typename T>
	T* FindAndValidateProperty(const std::string& name) {
		auto prop = this->FindChildByName(FName(name));
		if (prop == nullptr) {
			throw std::invalid_argument("Couldn't find property");
		}
		if (prop->Class->Name != FName(PropInfo<T>::class_name)) {
			throw std::invalid_argument("Property was of invalid type " +
										(std::string)prop->Class->Name);
		}
		return reinterpret_cast<T*>(prop);
	}
};

// 0x001C (0x00A8 - 0x008C)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1C];                            		// 0x008C (0x001C) MISSED OFFSET
};

class UFunction : public UStruct
{
public:
	unsigned long		FunctionFlags;
	unsigned short		iNative;
	unsigned short		RepOffset;
	struct FName		FriendlyName;
	unsigned char		OperPrecedence;
	unsigned char		NumParams;
	unsigned short		ParamsSize;
	unsigned long		ReturnValueOffset;
	void*				Func;

	std::vector<UProperty*> GetParameters();
	std::vector<UProperty*> GetReturnType();
};

// 0x0004 (0x0084 - 0x0080)
class UStructProperty : public UProperty
{
public:
	UScriptStruct* Struct_DONOTUSE;
	UScriptStruct *GetStruct() {
		if (UnrealSDK::EngineVersion <= 8631)
			return ((UScriptStruct **)(((char *)this) + 0x74))[0];
		else
			return Struct_DONOTUSE;
	}
};

// 0x0000 (0x0080 - 0x0080)
class UStrProperty : public UProperty {};

// 0x0004 (0x0084 - 0x0080)
class UObjectProperty : public UProperty
{
public:
	UObject* Object_DONOTUSE;
	UObject *GetObject() {
		if (UnrealSDK::EngineVersion <= 8631)
			return ((UObject **)(((char *)this) + 0x74))[0];
		else
			return Object_DONOTUSE;
	}
};

// 0x0000 (0x0084 - 0x0084)
class UComponentProperty : public UObjectProperty {};

// 0x0004 (0x0088 - 0x0084)
class UClassProperty : public UObjectProperty
{
public:
	UClass* MetaClass;
};

// 0x0000 (0x0080 - 0x0080)
class UNameProperty : public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0000 (0x0080 - 0x0080)
class UIntProperty : public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UIntAttributeProperty : public UIntProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UInterfaceProperty : public UProperty
{
public:
	UClass *InterfaceClass_DONOTUSE;
	UClass *GetInterfaceClass() {
		if (UnrealSDK::EngineVersion <= 8631)
			return ((UClass **)(((char *)this) + 0x74))[0];
		else
			return InterfaceClass_DONOTUSE;
	}
};

// 0x0000 (0x0080 - 0x0080)
class UFloatProperty : public UProperty {};

// 0x0008 (0x0088 - 0x0080)
class UFloatAttributeProperty : public UFloatProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0008 (0x0088 - 0x0080)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET
};

// 0x0008 (0x008C - 0x0084)
class UByteAttributeProperty : public UByteProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0084 (0x0008) MISSED OFFSET
};

// 0x0004 (0x0084 - 0x0080)
class UBoolProperty : public UProperty
{
public:
	unsigned int Mask_DONOTUSE;
	unsigned int GetMask() {
		if (UnrealSDK::EngineVersion <= 8631)
			return ((unsigned int *)(((char *)this) + 0x74))[0];
		else
			return Mask_DONOTUSE;
	}
};

// 0x0004 (0x0084 - 0x0080)
class UArrayProperty : public UProperty
{
public:
	UProperty *Inner_DONOTUSE;
	UProperty *GetInner() {
		if (UnrealSDK::EngineVersion <= 8631)
			return ((UProperty **)(((char *)this) + 0x74))[0];
		else
			return Inner_DONOTUSE;
	}
};

// 0x000C (0x004C - 0x0040)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x0040 (0x000C) MISSED OFFSET
};

// 0x000C (0x004C - 0x0040)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x0040 (0x000C) MISSED OFFSET
};


// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// 0x0044 (0x00D0 - 0x008C)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x44];                            		// 0x008C (0x0044) MISSED OFFSET
};

// 0x00A8 (0x00E4 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                            		// 0x003C (0x00A8) MISSED OFFSET
};

// 0x0100 (0x01D0 - 0x00D0)

class UClass : public UState
{
public:
	unsigned long		bCooked : 1;
	void*				ClassAddReferencedObjects;
	unsigned long		ClassCastFlags;
	FName				ClassConfigName;
	void*				ClassConstructor;
	UObject				*ClassDefaultObject;
	unsigned int		ClassFlags;
	unsigned char       UnknownData00[0xD8];                           		// 0x00D0 (0x0100) MISSED OFFSET

	UObject* CreateDefaultObject()
	{
		return UnrealSDK::pGetDefaultObject(this, 0);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class");
		return ptr;
	}
};

struct FFunction
{
	UObject *obj;
	UFunction *func;

private:
	void GenerateParams(const py::args& args, const py::kwargs& kwargs, PropertyHelper* params);

public:
	py::object GetReturn(PropertyHelper* params);
	py::object Call(py::args args, py::kwargs kwargs);
};

struct FOutParmRec
{
	UProperty		*Property;
	unsigned char	*PropAddr;
	FOutParmRec		*NextOutParm;
};

struct FOutputDevice
{
	void* VfTable;
	unsigned long bAllowSuppression;
	unsigned long bSuppressEventTag;
	unsigned long bAutoEmitLineTerminator;
};

struct FFrame : public FOutputDevice
{
	class UFunction* Node;
	class UObject* Object;
	unsigned char* Code;
	unsigned char* Locals;

	struct FFrame* PreviousFrame;
	struct FOutParmRec* Outparams;

public:
	void SkipFunction();
};

struct FStruct
{
	UStruct		*structType;
	void		*base;

	inline FStruct(UStruct* s, void* b) {
		LOG(INTERNAL, "Creating FStruct of type '%s' from %p", s->GetObjectName().c_str(), b);
		structType = s;
		base = b;
	}


	/**
	 * @brief Gets a property on the object.
	 * @note Always gets the first index of fixed arrays.
	 *
	 * @tparam T The property type.
	 * @param name The name of the property to get.
	 * @return The property's value.
	 */
	template <typename T>
	typename PropInfo<T>::type GetProperty(const std::string& name) {
		return reinterpret_cast<PropertyHelper*>(this->base)
			->ReadProperty<T>(this->structType->FindAndValidateProperty<T>(name), 0);
	}

	/**
	 * @brief Sets an object property's value.
	 * @note Always sets the first index of fixed arrays.
	 *
	 * @tparam T The property type.
	 * @param name The name of the property to get.
	 * @param val The value to write.
	 */
	template <typename T>
	void SetProperty(const std::string& name, typename PropInfo<T>::type val) {
		return reinterpret_cast<PropertyHelper*>(this->base)
			->WriteProperty<T>(this->structType->FindAndValidateProperty<T>(name), 0, val);
	}

	/**
	 * @brief Gets the python value for a property on the object.
	 *
	 * @param name The name of the property to get.
	 * @return The property's value.
	 */
	py::object GetPyProperty(const std::string& name);

	/**
	 * @brief Sets an object property's value from a python object.
	 *
	 * @param name The name of the property to set.
	 * @param val The value to set.
	 */
	void SetPyProperty(const std::string& name, py::object val);

	py::str Repr() const;
};

struct FArray {
	TArray<uint8_t>* arr;
	UProperty* type;
	unsigned int IterCounter;

	FArray(TArray<uint8_t>* array, UProperty* s);

	py::object GetItem(unsigned int i) const;
	void SetItem(unsigned int I, py::object Obj) const;
	long GetAddress() const;
	FArray* Iter();
	py::object Next();
	py::str Repr();
	void Clear();
	int Length();
};

// Class Engine.UIRoot
// 0x000C (0x003C - 0x0048)
class UUIRoot : public UObject
{
public:
	TArray<struct FString>                             BadCapsLocContexts;                                       // 0x003C(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("UIRoot");
		return ptr;
	}

	static struct FString SafeCaps(const struct FString& StringToCap);
	static FScriptInterface GetOnlinePlayerInterfaceEx();
	static FScriptInterface GetOnlinePlayerInterface();
	static FScriptInterface GetOnlineGameInterface();
	static bool GetDataStoreStringValue(const struct FString& InDataStoreMarkup, class ULocalPlayer* OwnerPlayer, struct FString* OutStringValue);
	static bool GetDataStoreFieldValue(const struct FString& InDataStoreMarkup, class ULocalPlayer* OwnerPlayer, struct FUIProviderFieldValue* OutFieldValue);
	static bool SetDataStoreStringValue(const struct FString& InDataStoreMarkup, const struct FString& InStringValue, class ULocalPlayer* OwnerPlayer);
	static bool SetDataStoreFieldValue(const struct FString& InDataStoreMarkup, class ULocalPlayer* OwnerPlayer, struct FUIProviderFieldValue* InFieldValue);
	static class UUIDataStore* StaticResolveDataStore(const struct FName& DataStoreTag, class ULocalPlayer* InPlayerOwner);
	static class UGameUISceneClient* GetSceneClient();
	static class UUIInteraction* GetCurrentUIController();
	static unsigned char GetInputPlatformType(class ULocalPlayer* OwningPlayer);
};

// Class Engine.Interaction
// 0x0030 (0x0048 - 0x0078)
class UInteraction : public UUIRoot
{
public:
	struct FScriptDelegate                             __OnReceivedNativeInputKey__Delegate;                     // 0x0048(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedNativeInputAxis__Delegate;                    // 0x0054(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedNativeInputChar__Delegate;                    // 0x0060(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInitialize__Delegate;                                 // 0x006C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Interaction");
		return ptr;
	}


	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	void Initialized();
	void OnInitialize();
	void Init();
	void PostRender(class UCanvas* Canvas);
	void Tick(float DeltaTime);
	bool OnReceivedNativeInputChar(int ControllerId, const struct FString& Unicode);
	bool OnReceivedNativeInputAxis(int ControllerId, const struct FName& Key, float Delta, float DeltaTime, bool bGamepad);
	bool OnReceivedNativeInputKey(int ControllerId, const struct FName& Key, unsigned char EventType, float AmountDepressed, bool bGamepad);
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x001C
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004)
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FPointer>                            ChildNodes;                                               // 0x0010(0x000C) (AlwaysInit, NeedCtorLink)
};


// Class Engine.Console
// 0x0158 (0x0078 - 0x01D0)
class UConsole : public UInteraction
{
public:
	class ULocalPlayer*                                ConsoleTargetPlayer;                                      // 0x0078(0x0004)
	class UTexture2D*                                  DefaultTexture_Black;                                     // 0x007C(0x0004)
	class UTexture2D*                                  DefaultTexture_White;                                     // 0x0080(0x0004)
	struct FName                                       ConsoleKey;                                               // 0x0084(0x0008) (Config, GlobalConfig)
	struct FName                                       TypeKey;                                                  // 0x008C(0x0008) (Config, GlobalConfig)
	int                                                MaxScrollbackSize;                                        // 0x0094(0x0004) (Config, GlobalConfig)
	TArray<struct FString>                             Scrollback;                                               // 0x0098(0x000C) (NeedCtorLink)
	int                                                SBHead;                                                   // 0x00A4(0x0004)
	int                                                SBPos;                                                    // 0x00A8(0x0004)
	int                                                HistoryTop;                                               // 0x00AC(0x0004) (Config)
	int                                                HistoryBot;                                               // 0x00B0(0x0004) (Config)
	int                                                HistoryCur;                                               // 0x00B4(0x0004) (Config)
	struct FString                                     History[0x10];                                            // 0x00B8(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bNavigatingHistory : 1;                                   // 0x0178(0x0004) (Transient)
	unsigned long                                      bCaptureKeyInput : 1;                                     // 0x0178(0x0004) (Transient)
	unsigned long                                      bCtrl : 1;                                                // 0x0178(0x0004)
	unsigned long                                      bEnableUI : 1;                                            // 0x0178(0x0004) (Config)
	unsigned long                                      bAutoCompleteLocked : 1;                                  // 0x0178(0x0004) (Transient)
	unsigned long                                      bRequireCtrlToNavigateAutoComplete : 1;                   // 0x0178(0x0004) (Config)
	unsigned long                                      bIsRuntimeAutoCompleteUpToDate : 1;                       // 0x0178(0x0004) (Transient)
	struct FString                                     TypedStr;                                                 // 0x017C(0x000C) (NeedCtorLink)
	int                                                TypedStrPos;                                              // 0x0188(0x0004)
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x018C(0x000C) (Config, NeedCtorLink)
	TArray<struct FAutoCompleteCommand>                AutoCompleteList;                                         // 0x0198(0x000C) (Transient, NeedCtorLink)
	int                                                AutoCompleteIndex;                                        // 0x01A4(0x0004) (Transient)
	struct FAutoCompleteNode                           AutoCompleteTree;                                         // 0x01A8(0x001C) (Native, Transient)
	TArray<int>                                        AutoCompleteIndices;                                      // 0x01C4(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Console");
		return ptr;
	}


	void UpdateCompleteIndices();
	void BuildRuntimeAutoCompleteList(bool bForce);
	void AppendInputText(const struct FString& Text);
	bool ProcessControlKey(const struct FName& Key, unsigned char Event);
	void FlushPlayerInput();
	bool InputChar(int ControllerId, const struct FString& Unicode);
	bool InputKey(int ControllerId, const struct FName& Key, unsigned char Event, float AmountDepressed, bool bGamepad);
	void PostRender_Console(class UCanvas* Canvas);
	void StartTyping(const struct FString& Text);
	void OutputText(const struct FString& Text);
	void OutputTextLine(const struct FString& Text);
	void ClearOutput();
	void ConsoleCommand(const struct FString& Command);
	void ShippingConsoleCommand(const struct FString& Command);
	void PurgeCommandFromHistory(const struct FString& Command);
	void SetCursorPos(int Position);
	void SetInputText(const struct FString& Text);
	void Initialized();
};

typedef void* (__thiscall* tMalloc)(void***, unsigned long, unsigned int);
typedef void(__thiscall* tFree)(void***, void*);



#ifdef _MSC_VER
#pragma pack ( pop )
#endif

#endif

#else

#include "UnrealEngine/Core/UE4/UE4CoreClasses.h"

#endif
