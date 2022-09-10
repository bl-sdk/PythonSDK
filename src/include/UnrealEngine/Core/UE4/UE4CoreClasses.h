#pragma once
#include "stdafx.h"
#include <map>

#ifdef UE4

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "PropertyHelper.h"
#include "pydef.h"
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


// Class CoreUObject.Object
// 0x0028
class UObject {
   private:
	/**
	 * @brief Dummy function which creates a vftable, to offset the remaining fields correctly.
	 */
	virtual void Dummy(){};

   public:
	int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UClass* Class;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject* Outer;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

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

	inline void PostEditChangeProperty(uint8_t* PropertyChangedEvent) {
		return GetVFunction<void(*)(UObject*, uint8_t& PropertyChangedEvent)>(this, 28)(this, *PropertyChangedEvent);
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

	void DumpObject();

	static class UObject* FindObject(const class FString& ObjectName, class UClass* ObjectClass);

	void ExecuteUbergraph(int EntryPoint);
};


struct FFunction
{
	UObject* obj;
	UFunction* func;

private:
	void GenerateParams(const py::args& args, const py::kwargs& kwargs, PropertyHelper* params);

	template <typename T>
	UProperty* ValidateParam(UProperty* prop);

	void CallTEMPLATESetParam(void* params, UProperty* prop);

	template <typename T, typename ... Ts>
	void CallTEMPLATESetParam(void* params, UProperty* prop, T firstArg, Ts... args);

public:
	py::object GetReturn(PropertyHelper* params);
	py::object Call(py::args args, py::kwargs kwargs);

	template <typename R, typename ... Ts>
	typename PropInfo<R>::type CallTEMPLATE(Ts... args);
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

	UField* FindChildByName(FName InName) const
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
   private:
	/**
	 * @brief Validates that an array access is of the correct type.
	 *
	 * @tparam T The property type.
	 */
	template <typename T>
	void ValidateType() {
		if (this->type == nullptr) {
			throw std::invalid_argument("Couldn't find property");
		}
		if (this->type->Class->Name != FName(PropInfo<T>::class_name)) {
			throw std::invalid_argument("Property was of invalid type " +
										(std::string)this->type->Class->Name);
		}
	}

	/**
	 * @brief Validates that an array access is to a valid index.
	 *
	 * @param idx The index to check.
	 */
	void ValidateIndex(size_t idx);

   public:
	TArray<uint8_t>* arr;
	UProperty* type;
	unsigned int IterCounter;

	FArray(TArray<uint8_t>* array, UProperty* s);

	void Clear();
	FArray* Iter();
	py::object Next();
	py::str Repr();
	int Length();

	/**
	 * @brief Gets the item at the given index.
	 *
	 * @tparam T The property type.
	 * @param idx The index to get.
	 * @return The object at the given index.
	 */
	template <typename T>
	typename PropInfo<T>::type GetItem(size_t idx) {
		this->ValidateType<T>();
		this->ValidateIndex(idx);
		return reinterpret_cast<PropertyHelper*>(this->arr->Data)
			->ReadProperty<T>(reinterpret_cast<T*>(this->type), idx);
	}

	/**
	 * @brief Sets an item in the array.
	 *
	 * @tparam T The property type.
	 * @param idx The index to set the value at.
	 * @param val The value to write.
	 */
	template <typename T>
	void SetItem(size_t idx, typename PropInfo<T>::type val) {
		this->ValidateType<T>();
		this->ValidateIndex(idx);
		return reinterpret_cast<PropertyHelper*>(this->arr->Data)
			->WriteProperty<T>(reinterpret_cast<T*>(this->type), idx, val);
	}

	/**
	 * @brief Gets the python value for an item in the array.
	 *
	 * @param idx The index to get.
	 * @return The object at the given index.
	 */
	py::object GetPyItem(size_t idx);

	/**
	 * @brief Sets an in the array from a python object.
	 *
	 * @param idx The index to set the value at.
	 * @param val The value to set.
	 */
	void SetPyItem(size_t idx, py::object val);
};

template<typename T>
struct FSoftObject {
	T* object;
	std::string asset_path;
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

	bool IsBound() const;
	std::string ToString() const;
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

	uint32_t ClassFlags;
	uint64_t ClassCastFlags;

	UClass* ClassWithin;
	UObject* ClassGeneratedBy;

	FName ClassConfigName;
	TArray<FRepRecord> ClassReps;
	TArray<UField*> NetFields;

	UClass* ClassDefaultObject;

	unsigned char UnknownData01[0xB6];

	UObject* CreateDefaultObject()
	{
		return UnrealSDK::pGetDefaultObject(this, 0);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
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
	uint64_t			PropertyFlags;
	uint16_t			RepIndex;
	uint8_t				BlueprintReplicationCondition;

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


// Class Engine.Console
// 0x0108 (0x0130 - 0x0028)
class UConsole : public UObject {
   public:
	uint8_t _UnknownData00[0x10];
	UObject* _ConsoleTargetPlayer;      // DO NOT USE - Use GetProperty instead
	UObject* _DefaultTexture_Black;     // DO NOT USE - Use GetProperty instead
	UObject* _DefaultTexture_White;     // DO NOT USE - Use GetProperty instead

	TArray<FString> Scrollback;
	int SBHead;
	int SBPos;

	TArray<FString> _HistoryBuffer;     // DO NOT USE - Use GetProperty instead
	uint8_t _UnknownData02[0xA0];

	UObject* ConsoleSettings;

	uint8_t _UnknownData03[0x10];

	void OutputTextLine(const FString& Text) {
		// TODO: Figure out why this is causing a buffer overflow after it reaches the max
		// Possibly it happens because the FStrings aren't being deconstructed after being removed?

		/*

		// UE3 SDK is capable of calling this function through UE itself, UE4 isn't :/

		// If we are full, delete the first line
		if (Scrollback.Num() > ConsoleSettings->MaxScrollbackSize - 1)
		{
			Scrollback.RemoveAt(0, 1);
			SBHead = Scrollback.Num() - 1;
		}
		else
		{
			SBHead += 1;
		}

		// Add the line
		Scrollback.Add(Text);
		*/
	}

	void OutputTextCpp(wchar_t* text) {
		if (wcsstr(text, L"\n")) {
			std::wstring s = text;
			// https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
			size_t last = 0;
			size_t next = 0;

			while ((next = s.find(L"\n", last)) != std::string::npos) {
				OutputTextLine(FString((wchar_t*)(s.substr(last, next - last).c_str())));
				last = next + 1;
			}
			OutputTextLine(FString((wchar_t*)(s.substr(last).c_str())));
		} else {
			OutputTextLine(FString(text));
		}
	}
};

typedef void* (__thiscall* tMalloc)(unsigned long, unsigned int);
typedef void(__thiscall* tFree)(void***, void*);



#ifdef _MSC_VER
#pragma pack(pop)
#endif

#endif
