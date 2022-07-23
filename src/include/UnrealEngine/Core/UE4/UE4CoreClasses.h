#pragma once
#include "stdafx.h"
#include <map>

#ifdef UE4

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "pydef.h"
#include "UE4CoreStructs.h"
#include "UnrealEngine/UE4Defines.h"

class UStruct;
struct FScriptDelegate;

template<typename Fn>
inline Fn GetVFunction(const void* instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	// __debugbreak();
	return reinterpret_cast<Fn>(vtable[index]);
}

struct FHelper {
public:
	struct FStruct GetStructProperty(class UStructProperty* Prop);
	class FString* GetStrProperty(class UProperty* Prop);
	class UObject* GetObjectProperty(class UProperty* Prop);
	class UClass* GetClassProperty(class UProperty* Prop);
	struct FName* GetNameProperty(class UProperty* Prop);
	class UComponent* GetComponentProperty(UProperty* Prop);

	int GetIntProperty(class UProperty* Prop);

	class FScriptInterface* GetInterfaceProperty(class UProperty* Prop);
	float GetFloatProperty(class UProperty* Prop);
	struct FScriptDelegate* GetDelegateProperty(class UProperty* Prop);
	unsigned char GetByteProperty(class UProperty* Prop);
	bool GetBoolProperty(class UBoolProperty* Prop);
	void* GetPropertyAddress(class UProperty* Prop);
	py::object GetArrayProperty(class UArrayProperty* Prop);
	pybind11::object GetProperty(class UProperty* Prop);

#ifdef UE4
	py::object GetMapProperty(class UMapProperty* Prop);
	class UObject* GetWeakObjectProperty(class UWeakObjectProperty* Prop);

	py::object GetSetProperty(class USetProperty* Prop);
	const wchar_t* GetTextProperty(class UTextProperty* Prop);
	py::object GetSoftClassProperty(class USoftClassProperty* Prop);
	py::object GetSoftObjectProperty(class USoftObjectProperty* Prop);
	py::object GetEnumProperty(class UEnumProperty* Prop);

	void SetProperty(class UEnumProperty* Prop, const py::object& Val);
	void SetProperty(class UTextProperty* Prop, const py::object& Val);
	void SetProperty(class USoftObjectProperty* Prop, const py::object& Val);
	void SetProperty(class UWeakObjectProperty* Prop, const py::object& Val);
	void SetProperty(class UUInt16Property* Prop, const py::object& Val);
	void SetProperty(class UUInt32Property* Prop, const py::object& Val);
	void SetProperty(class UUInt64Property* Prop, const py::object& Val);
	void SetProperty(class UInt64Property* Prop, const py::object& Val);
	void SetProperty(class UInt16Property* Prop, const py::object& Val);
	void SetProperty(class UInt8Property* Prop, const py::object& Val);
#endif

	void SetProperty(class UStructProperty* Prop, const py::object& Val);
	void SetProperty(class UStrProperty* Prop, const py::object& Val);
	void SetProperty(class UObjectProperty* Prop, const py::object& Val);
	void SetProperty(class UClassProperty* Prop, const py::object& Val);
	void SetProperty(class UNameProperty* Prop, const py::object& Val);
	void SetProperty(class UInterfaceProperty* Prop, const py::object& Val);
	void SetProperty(class UDelegateProperty* Prop, const py::object& Val);
	void SetProperty(class UFloatProperty* Prop, const py::object& Val);
	void SetProperty(class UIntProperty* Prop, const py::object& Val);
	void SetProperty(class UByteProperty* Prop, const py::object& Val);
	void SetProperty(class UBoolProperty* boolProp, const py::object& Val);
	void SetProperty(class UArrayProperty* Prop, const py::object& Val);
	void SetProperty(class UProperty* Prop, const py::object& val);

};


// Class CoreUObject.Object
// 0x0028
class UObject : FHelper
{
public:
	int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UClass* Class;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject* Outer;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY


	static inline FChunkedFixedUObjectArray* GObjects()
	{
		return static_cast<FChunkedFixedUObjectArray*>(UnrealSDK::pGObjects);
	}


	const char* GetName() const;
	std::string GetNameCpp() const;
	std::string GetObjectName();
	std::string GetFullName();

	static UObject* Load(UClass* ClassToLoad, const char* ObjectFullName);
	static UObject* Load(const char* ClassName, const char* ObjectFullName);
	static UObject* Find(UClass* Class, const char* ObjectFullName);
	static UObject* Find(const char* ClassName, const char* ObjectFullName);

	static std::vector<UObject*> FindObjectsRegex(const std::string& RegexString);
	static std::vector<UObject*> FindObjectsContaining(const std::string& StringLookup);
	static UClass* FindClass(const char* ClassName, const bool Lookup = false);

	pybind11::object GetProperty(std::string PropName);

	struct FFunction GetFunction(std::string& PropName);

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(UObject::GObjects().GetByIndex(index).Object);
	}

	bool IsA(UClass* cmp) const;
	class UPackage* GetPackageObject() const;
	static std::vector<UObject*> FindAll(char* InStr, bool IncludeSubclasses = false);

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class /Script/CoreUObject.Object");
		return ptr;
	}

	inline void PostEditChangeProperty(FPropertyChangedEvent* PropertyChangedEvent) {
		return GetVFunction<void(*)(UObject*, FPropertyChangedEvent& PropertyChangedEvent)>(this, 28)(this, *PropertyChangedEvent);
	}

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 65)(this, function, parms);
	}

	static UObject* FindObject(const std::string& name) {
		for (size_t i = 0; i < UObject::GObjects()->Count; ++i) {
			UObject* obj = UObject::GObjects()->Get(i);
			if (obj == nullptr) continue;

			if (!strcmp(obj->GetFullName().c_str(), name.c_str())) {
				return static_cast<UObject*>(obj);
			}

		}

		return nullptr;
	}

	static UObject* FindObjectClassless(const std::string& objName) {
		for (size_t i = 0; i < UObject::GObjects()->Count; ++i) {
			UObject* obj = UObject::GObjects()->Get(i);
			if (obj == nullptr) continue;
			if (!strcmp(obj->GetObjectName().c_str(), objName.c_str())) {
				return static_cast<UObject*>(obj);
			}
		}

		return nullptr;
	}

	static class UObject* DynamicLoadObject(const class FString& ObjectName, class UClass* ObjectClass, bool MayFail) {
		// TODO: Implement UE4 DynamicLoadObject
		// See: https://docs.unrealengine.com/en-US/API/Runtime/CoreUObject/UObject/FSoftObjectPtr/index.html

		return nullptr;
	}
	void DumpObject();

	void SetProperty(std::string& PropName, const py::object& Val);

	virtual void Dummy() {};
	static class UObject* FindObject(const class FString& ObjectName, class UClass* ObjectClass);

	void ExecuteUbergraph(int EntryPoint);
};

struct FPointer
{
	uintptr_t Dummy;
};

struct FFunction
{
	UObject* obj;
	UFunction* func;

private:
	FHelper* GenerateParams(const py::args& args, const py::kwargs& kwargs, FHelper* params);

public:
	py::object GetReturn(FHelper* params);
	py::object Call(py::args args, py::kwargs kwargs);
};



struct FOutParmRec
{
	UProperty* Property;
	unsigned char* PropAddr;
	FOutParmRec* NextOutParm;
};

struct FOutputDevice
{
	void* VfTable;
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



// Class CoreUObject.Field
// 0x0008 (0x0030 - 0x0028)
class UField : public UObject
{
public:
	class UField* Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}

};

// Class CoreUObject.Struct
// 0x0058 (0x0088 - 0x0030)
class UStruct : public UField
{
public:
	/* Struct this inherits from, may be null */
	class UStruct* SuperField;
	/* Pointer to start of linked list of child fields */
	class UField* Children;
	/* Total size of all UProperties, the allocated structure may be larger due to alignment */
	int32_t                                            PropertySize;
	/* Alignment of structure in memory, structure will be at least this large */
	int32_t                                            MinAlignment;
	/* Script bytecode associated with this object */
	TArray<uint8_t>                                    Script;
	/* In memory only: Linked list of properties from most-derived to base */
	class UProperty* PropertyLink;
	/* In memory only: Linked list of object reference properties from most-derived to base */
	class UProperty* RefLink;
	/* In memory only: Linked list of properties requiring destruction. Note this does not include things that will be destroyed byt he native destructor */
	class UProperty* DestructorLink;
	/** In memory only: Linked list of properties requiring post constructor initialization */
	class UProperty* PostConstructLink;
	/* Array of object references embedded in script code. Mirrored for easy access by realtime garbage collection code */
	TArray<UObject*>                                   ScriptObjectReferences;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}


	UObject* FindChildByName(FName InName) const
	{
		const UStruct* thisField = this;
		while (thisField)
		{
			for (UField* Child = thisField->Children; Child != NULL; Child = Child->Next)
				if (Child->Name == InName)
					return Child;
			thisField = thisField->SuperField;
		}

		return NULL;
	}
};

struct FStruct
{
public:
	UStruct* structType;
	void* base;

	inline FStruct(UStruct* s, void* b) {
		LOG(INTERNAL, "Creating FStruct of type '%s' from %p", s->GetObjectName().c_str(), b);
		structType = s;
		base = b;
	}

	pybind11::object GetProperty(const std::string& PropName) const;
	void SetProperty(std::string& PropName, py::object value) const;
	py::str Repr() const;
};

struct FArray {
	TArray <char>* arr;
	UProperty* type;
	unsigned int IterCounter;

	FArray(TArray <char>* array, UProperty* s);

	py::object GetItem(unsigned int i) const;
	void SetItem(unsigned int I, py::object Obj) const;
	long GetAddress() const;

	void Clear();
	FArray* Iter();
	py::object Next();
	py::str Repr();
};

// Class CoreUObject.Interface
// 0x0000 (0x0028 - 0x0028)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}

};


// Class CoreUObject.Package
// 0x0068 (0x0090 - 0x0028)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}

};



// Class CoreUObject.GCObjectReferencer
// 0x0038 (0x0060 - 0x0028)
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}

};

// Class CoreUObject.TextBuffer
// 0x0028 (0x0050 - 0x0028)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}

};


// Class CoreUObject.ScriptStruct
// 0x0010 (0x0098 - 0x0088)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}

};


// Class CoreUObject.Function
// 0x0030 (0x00B8 - 0x0088)
class UFunction : public UStruct
{
public:
	int												FunctionFlags;
	short                                           RepOffset;
	char                                            NumParams;
	short                                           ParamsSize;
	short											ReturnValueOffset;
	short											RPCResponseId;
	class UProperty* FirstPropertyToInit;
	class UFunction* EventGraphFunction;
	int												EventGraphCallOffset;
	void* Func;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}

	std::vector<UProperty*> GetParameters();
	std::vector<UProperty*> GetReturnType();

};


struct FScriptDelegate
{
public:
	/* The object bound to this delegate, or nullptr if no object is bound */
	FWeakObjectPtr Object;

	/* Name of the function to call on the bound object */
	struct FName FunctionName;

	/* Empty constructor to satisfy the compiler */
	FScriptDelegate() { }

	FScriptDelegate(FWeakObjectPtr Obj, FName func) {
		Object = Obj;
		FunctionName = func;
	}

	FScriptDelegate(UObject* obj, FName func) {
		Object.Set(obj);
		FunctionName = func;
	}

	/* An FScriptDelegate won't be bound if:
		- Object is nullptr
		- Object doesn't have a function by the name of `FunctionName`
	*/
	inline bool IsBound() const {
		if (FunctionName.IsValid()) {
			UObject* objPtr = Object.Get();
			if (objPtr != nullptr) {
				std::string funcName = std::string(FunctionName.GetName());
				return (objPtr->GetFunction(funcName).func != nullptr);
			}
		}
		return false;
	}
	/* Return a string representation of the given FScriptDelegate */
	inline std::string ToString() const {
		if (IsBound()) {
			UObject* objPtr = Object.Get();
			std::string funcName = std::string(FunctionName.GetName());
			std::string fullName = objPtr->GetFunction(funcName).func->GetFullName();
			return fullName; // Get the function and then return the full name
		}

		return "<UNBOUND>"; // Return "<UNBOUND>" if the FScriptDelegate isn't actually bound to anything
	};
};


struct FRepRecord
{
	UProperty* Property;
	int32_t Index;
	FRepRecord(UProperty* InProperty, int32_t InIndex) : Property(InProperty), Index(InIndex) {}
};

// Class CoreUObject.Class
// 0x0178 (0x0200 - 0x0088)
class UClass : public UStruct
{
public:
	uint32_t ClassUnique : 31;
	uint32_t bCooked : 1;

	EClassFlags ClassFlags;
	EClassCastFlags ClassCastFlags;

	UClass* ClassWithin;
	UObject* ClassGeneratedBy;

	FName ClassConfigName;
	TArray<FRepRecord> ClassReps;
	TArray<UField*> NetFields;

	UClass* ClassDefaultObject;

	unsigned char UnknownData01[0xB6];

	/*
	unsigned long		bCooked : 1;
	FPointer			ClassAddReferencedObjects;
	EClassCastFlags		ClassCastFlags;
	FName				ClassConfigName;
	FPointer			ClassConstructor;
	UObject* ClassDefaultObject;
	EClassFlags		ClassFlags;
	unsigned char       UnknownData00[0xD8];                           		// 0x00D0 (0x0100) MISSED OFFSET
	*/

	UObject* CreateDefaultObject()
	{
		return UnrealSDK::pGetDefaultObject(this, 0);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}

	UObject* FindChildByName(FName InName) const
	{
		const UStruct* thisField = this;
		while (thisField)
		{
			for (UField* Child = thisField->Children; Child != NULL; Child = Child->Next)
				if (Child->Name == InName)
					return Child;
			thisField = thisField->SuperField;
		}

		return NULL;
	}


	std::vector<UProperty*> GetProperties() const {
		const auto size = sizeof(UClass);

		const UStruct* thisField = this;
		std::vector<UProperty*> propertyList;
		while (thisField)
		{
			for (UField* Child = thisField->Children; Child != NULL; Child = Child->Next)
				propertyList.push_back(reinterpret_cast<UProperty*>(Child));
			thisField = thisField->SuperField;
		}
		return propertyList;
	}

	std::vector<UFunction*> GetFunctions() {
		const UStruct* thisField = this;
		std::vector<UFunction*> propertyList;
		while (thisField)
		{
			for (UField* Child = thisField->Children; Child != NULL; Child = Child->Next) {
				if (Child->GetFullName().find("Function ") != std::string::npos) { // Odd kinda janky solution imo but eh
					propertyList.push_back(reinterpret_cast<UFunction*>(Child));
				}
			}
			thisField = thisField->SuperField;
		}
		return propertyList;
	}
};


// Class CoreUObject.DelegateFunction
// 0x0000 (0x00B8 - 0x00B8)
class UDelegateFunction : public UFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return ptr;
	}

};


// Class CoreUObject.DynamicClass
// 0x0068 (0x0268 - 0x0200)
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0200(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
		return ptr;
	}

};


// Class CoreUObject.PackageMap
// 0x00B8 (0x00E0 - 0x0028)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}

};


// Class CoreUObject.Enum
// 0x0030 (0x0060 - 0x0030)
class UEnum : public UField
{
public:
	FString CppType;
	TArray<TPair<FName, uint64_t>> Names;
	int64_t CppForm;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}

	std::map<std::wstring, uint64_t> GetNames() {
		std::map<std::wstring, uint64_t> returnNames;
		for (auto i = 0; i < Names.Num(); ++i) {
			auto enumName = Names.Get(i);
			returnNames.insert(std::pair<std::wstring, uint64_t>(Util::Widen(std::string(enumName.Key.GetName())), enumName.Value));
		}
		return returnNames;
	}

};


// Class CoreUObject.Property
// 0x0040 (0x0070 - 0x0030)
class UProperty : public UField
{
public:
	int						ArrayDim;
	int						ElementSize;
	EPropertyFlags			PropertyFlags;
	unsigned short			RepIndex;

	ELifetimeCondition BlueprintReplicationCondition;

	// In memory variables (generated during Link()).
	int		Offset_Internal;

	FName		RepNotifyFunc;

	/** In memory only: Linked list of properties from most-derived to base **/
	UProperty* PropertyLinkNext;
	/** In memory only: Linked list of object reference properties from most-derived to base **/
	UProperty* NextRef;
	/** In memory only: Linked list of properties requiring destruction. Note this does not include things that will be destroyed byt he native destructor **/
	UProperty* DestructorLinkNext;
	/** In memory only: Linked list of properties requiring post constructor initialization.**/
	UProperty* PostConstructLinkNext;                               // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}

};


// Class CoreUObject.EnumProperty
// 0x0010 (0x0080 - 0x0070)
class UEnumProperty : public UProperty
{
public:
	class UNumericProperty* UnderlyingProp;
	class UEnum* Enum;
	// unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.EnumProperty");
		return ptr;
	}


};


// Class CoreUObject.LinkerPlaceholderClass
// 0x01B8 (0x03B8 - 0x0200)
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0200(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00C8 (0x00F0 - 0x0028)
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderFunction
// 0x01B8 (0x0270 - 0x00B8)
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x00B8(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return ptr;
	}

};


// Class CoreUObject.MetaData
// 0x00F0 (0x0118 - 0x0028)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}

};


// Class CoreUObject.ObjectRedirector
// 0x0008 (0x0030 - 0x0028)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}

};


// Class CoreUObject.ArrayProperty
// 0x0008 (0x0078 - 0x0070)
class UArrayProperty : public UProperty
{
public:
	UProperty* Inner_DONOTUSE;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}

	UProperty* GetInner() {
		return Inner_DONOTUSE;
	}
};


// Class CoreUObject.ObjectPropertyBase
// 0x0008 (0x0078 - 0x0070)

class UObjectPropertyBase : public UProperty
{
public:
	UClass* PropertyClass;
	//unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}

};

// Class CoreUObject.BoolProperty
// 0x0008 (0x0078 - 0x0070)
class UBoolProperty : public UProperty
{
public:
	uint8_t FieldSize;
	uint8_t ByteOffset;
	uint8_t ByteMask;
	uint8_t FieldMask;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}

	unsigned int GetMask() {
		return (unsigned int)FieldMask;
	}
};


// Class CoreUObject.NumericProperty
// 0x0000 (0x0070 - 0x0070)
class UNumericProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}

};


// Class CoreUObject.ByteProperty
// 0x0008 (0x0078 - 0x0070)
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}

};


// Class CoreUObject.ObjectProperty
// 0x0000 (0x0078 - 0x0078)
class UObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}

};


// Class CoreUObject.ClassProperty
// 0x0008 (0x0080 - 0x0078)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}

};


// Class CoreUObject.DelegateProperty
// 0x0008 (0x0078 - 0x0070)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}

};


// Class CoreUObject.DoubleProperty
// 0x0000 (0x0070 - 0x0070)
class UDoubleProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}

};


// Class CoreUObject.FloatProperty
// 0x0000 (0x0070 - 0x0070)
class UFloatProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}

};


// Class CoreUObject.IntProperty
// 0x0000 (0x0070 - 0x0070)
class UIntProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}

};


// Class CoreUObject.Int16Property
// 0x0000 (0x0070 - 0x0070)
class UInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}

};


// Class CoreUObject.Int64Property
// 0x0000 (0x0070 - 0x0070)
class UInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}

};


// Class CoreUObject.Int8Property
// 0x0000 (0x0070 - 0x0070)
class UInt8Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}

};


// Class CoreUObject.InterfaceProperty
// 0x0008 (0x0078 - 0x0070)
class UInterfaceProperty : public UProperty
{
public:
	/* Native interface class that this interface property refers to */
	class UClass* InterfaceClass;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}

	UClass* GetInterfaceClass() { return InterfaceClass;  }
};


// Class CoreUObject.LazyObjectProperty
// 0x0000 (0x0078 - 0x0078)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}

};


// TODO: Setup stuff for FScriptSparseArray, FScriptMap, etc
// I kinda hate it and its just a ton of jumps into different functions from various classes and I hate looking at it in the UE4 source
struct FScriptSparseArrayLayout {
	int Alignment;
	int Size;
};

struct FScriptSetLayout {
	int HashIndexOffset;
	int HashNextIdOffset;
	int Size;
	FScriptSparseArrayLayout SpareArrayLayout;
};

struct FScriptMapLayout {
	FScriptSetLayout SetLayout;
	int ValueOffset;
};


// Class CoreUObject.MapProperty
// 0x0038 (0x00A8 - 0x0070)
class UMapProperty : public UProperty
{
public:
	UProperty* KeyProp;
	UProperty* ValueProp;
	FScriptMapLayout MapLayout;

	//unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MapProperty");
		return ptr;
	}

};


// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (0x0078 - 0x0070)
class UMulticastDelegateProperty : public UProperty
{
public:
	UFunction* SignatureFunction;
	//unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}

};


// Class CoreUObject.NameProperty
// 0x0000 (0x0070 - 0x0070)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}

};


// Class CoreUObject.SetProperty
// 0x0028 (0x0098 - 0x0070)
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SetProperty");
		return ptr;
	}

};



// Class CoreUObject.SoftObjectProperty
// 0x0000 (0x0078 - 0x0078)
// Describes a reference variable to another object which may be nil, and will become valid or invalid at any point
class USoftObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{

		static auto ptr = UObject::FindClass("Class CoreUObject.SoftObjectProperty");
		return ptr;
	}

};


// Class CoreUObject.SoftClassProperty
// 0x0008 (0x0080 - 0x0078)
// Describes a reference variable to another class which may be nil, and will become valid or invalid at any point
class USoftClassProperty : public USoftObjectProperty
{
public:
	// This is actually just the class of the class object we're storing (I think?)
	class UClass* MetaClass;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SoftClassProperty");
		return ptr;
	}

	UClass* GetMetaClass() {
		return MetaClass;
	}

};


// Class CoreUObject.StrProperty
// 0x0000 (0x0070 - 0x0070)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}

};


// Class CoreUObject.StructProperty
// 0x0008 (0x0078 - 0x0070)
class UStructProperty : public UProperty
{
public:
	UScriptStruct* STRUCT_DONOTUSE;
	//unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}

	UScriptStruct* GetStruct() { return STRUCT_DONOTUSE; }

};


// Class CoreUObject.UInt16Property
// 0x0000 (0x0070 - 0x0070)
class UUInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}

};


// Class CoreUObject.UInt32Property
// 0x0000 (0x0070 - 0x0070)
class UUInt32Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}

};


// Class CoreUObject.UInt64Property
// 0x0000 (0x0070 - 0x0070)
class UUInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}

};


// Class CoreUObject.WeakObjectProperty
// 0x0000 (0x0078 - 0x0078)
class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}

};


// Class CoreUObject.TextProperty
// 0x0000 (0x0070 - 0x0070)
class UTextProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}

};


class UHandlerComponentFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

};


// Class SlateCore.FontBulkData
// 0x0098 (0x00C0 - 0x0028)
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}

};


// Class SlateCore.FontFaceInterface
// 0x0000 (0x0028 - 0x0028)
class UFontFaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}

};


// Class SlateCore.FontProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UFontProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}

};


// Class SlateCore.SlateTypes
// 0x0000 (0x0028 - 0x0028)
class USlateTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase* CustomStyle;                                              // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlateWidgetStyleContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}

};


class UInputCoreTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InputCore.InputCoreTypes");
		return ptr;
	}

};

class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x0278) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x0580 (0x05B0 - 0x0030)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x0580) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x03D8 (0x0408 - 0x0030)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x03D8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x03A0 (0x03D0 - 0x0030)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x03A0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x07F0 (0x0820 - 0x0030)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x07F0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0218 (0x0248 - 0x0030)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x0218) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01A0 (0x01D0 - 0x0030)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x01A0) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x04D0 (0x0500 - 0x0030)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x04D0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0228 (0x0258 - 0x0030)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x0228) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.SlateSettings
// 0x0008 (0x0030 - 0x0028)
class USlateSettings : public UObject
{
public:
	bool                                               bExplicitCanvasChildZOrder;                               // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x02E8 (0x0318 - 0x0030)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x02E8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x01E0 (0x0210 - 0x0030)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x01E0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

};



typedef void* (__thiscall* tMalloc)(unsigned long, unsigned int);
typedef void(__thiscall* tFree)(void***, void*);



#ifdef _MSC_VER
#pragma pack(pop)
#endif

#endif
