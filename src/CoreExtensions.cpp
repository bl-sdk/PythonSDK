#include "stdafx.h"
#include <stack>
#include <utility>
#include <sstream>

#ifndef UE4
#include "UnrealEngine/Core/UE3/Core_classes.h"
#include "UnrealEngine/Engine/UE3/Engine_classes.h"
#else
#include "UnrealEngine/Core/UE4/UE4CoreClasses.h"
#include "UnrealEngine/Engine/UE4/UE4EngineClasses.h"
#endif

std::vector<UProperty*> UFunction::GetParameters() {
	std::vector<UProperty*> parms;
	unsigned int currentIndex = 0;
	for (UProperty* Child = (UProperty*)Children; Child; Child = (UProperty*)Child->Next)
	{
		if (!(Child->PropertyFlags & 0x80)) // Param
			continue;
		parms.push_back(Child);
	}
	return parms;
}

std::vector<UProperty*> UFunction::GetReturnType() {
	std::vector<UProperty*> parms;
	for (UProperty* Child = (UProperty*)Children; Child; Child = (UProperty*)Child->Next)
	{
		if (Child->PropertyFlags & 0x400) // Return
			parms.push_back(Child);
	}

	return parms;
}


// UObject =======================================================================

const char* UObject::GetName() const
{
	return this->Name.GetName();
}

std::string UObject::GetFullName()
{
	if (!this->Class)
		return "(null)";

	std::string output = this->Class->GetName();
	output += " ";

	output += GetObjectName();

	return output;
}

UObject* UObject::Load(UClass* ClassToLoad, const char* ObjectFullName)
{
	return UObject::GObjects()->Get(0)->DynamicLoadObject(FString(ObjectFullName), ClassToLoad, true);
}

UObject* UObject::Load(const char* ClassName, const char* ObjectFullName)
{
	UClass* classToLoad = FindClass(ClassName);
	if (classToLoad)
		return Load(classToLoad, ObjectFullName);
	return nullptr;
}

UObject* UObject::Find(UClass* Class, const char* ObjectFullName)
{
	const bool doInjectedNext = UnrealSDK::gInjectedCallNext;
	UnrealSDK::DoInjectedCallNext();
	UObject* ret = FindObject(FString(ObjectFullName), Class);
	if (doInjectedNext)
		UnrealSDK::DoInjectedCallNext();
	return ret;
}

UObject* UObject::Find(const char* ClassName, const char* ObjectFullName)
{
	UClass* classToFind = FindClass(ClassName, true);
	if (classToFind)
		return Find(classToFind, ObjectFullName);
	return nullptr;
}

std::vector<UObject*> UObject::FindObjectsRegex(const std::string& RegexString)
{
	const std::regex re = std::regex(RegexString);
	std::vector<UObject*> ret;
	while (!GObjects())
		Sleep(100);
	while (!FName::Names())
		Sleep(100);
	for (size_t i = 0; i < GObjects()->Count; ++i)
	{
		UObject* object = GObjects()->Get(i);
		if (object && std::regex_match(object->GetFullName(), re))
			ret.push_back(object);
	}
	return ret;
}

std::vector<UObject*> UObject::FindObjectsContaining(const std::string& StringLookup)
{
	std::vector<UObject*> ret;
	while (!GObjects())
		Sleep(100);
	while (!FName::Names())
		Sleep(100);
	for (size_t i = 0; i < GObjects()->Count; ++i)
	{
		UObject* object = GObjects()->Get(i);
		if (object && object->GetFullName().find(StringLookup) != std::string::npos)
			ret.push_back(object);
	}
	return ret;
}

class UPackage* UObject::GetPackageObject() const
{
	UObject* pkg = nullptr;
	UObject* outer = this->Outer;
	while (outer)
	{
		pkg = outer;
		outer = pkg->Outer;
	}
	return static_cast<UPackage*>(pkg);
};

std::string UObject::GetNameCpp() const
{
	std::string output = "U";

	if (this->IsA(FindClass("Actor")))
	{
		output = "A";
	}

	output += GetName();

	return output;
}

std::string UObject::GetObjectName()
{
	std::stack<UObject*> parents{};

	for (auto current = this; current; current = current->Outer) {
		parents.push(current);
	}

	std::string output{};

	while (!parents.empty())
	{
		output += parents.top()->GetName();
		parents.pop();
		if (!parents.empty())
			output += '.';
	}

	return output;
}

UClass* UObject::FindClass(const char* ClassName, const bool Lookup)
{
	if (UnrealSDK::ClassMap.count(ClassName))
		return UnrealSDK::ClassMap[ClassName];

	if (!Lookup)
		return nullptr;

	for (size_t i = 0; i < GObjects()->Count; ++i)
	{
		const auto object = GObjects()->Get(i);

		if (!object || !object->Class)
			continue;

		// Might as well lookup all objects since we're going to be iterating over most objects regardless
		const char* c = object->Class->GetName();
		if (!strcmp(c, "Class"))
			UnrealSDK::ClassMap[object->GetName()] = static_cast<UClass*>(object);
		#ifdef UE4
		else if (strncmp(c, "BlueprintGeneratedClass", 23) == 0)
			UnrealSDK::ClassMap[object->GetName()] = static_cast<UBlueprintGeneratedClass*>(object);
		#endif
	}

	if (UnrealSDK::ClassMap.count(ClassName))
		return UnrealSDK::ClassMap[ClassName];

	return nullptr;
}

bool UObject::IsA(UClass* PClass) const
{
	for (auto superClass = this->Class; superClass; superClass = static_cast<UClass*>(superClass->SuperField))
	{
		if (superClass == PClass)
			return true;
	}

	return false;
}

pybind11::object UObject::GetProperty(std::string PropName)
{
	const auto obj = this->Class->FindChildByName(FName(PropName));
	if (!obj)
		return pybind11::none();
	const auto prop = reinterpret_cast<UProperty*>(obj);
	if (!strcmp(obj->Class->GetName(), "Function"))
		return pybind11::cast(GetFunction(PropName));
	return reinterpret_cast<FHelper*>(this)->GetProperty(prop);
}

void UObject::SetProperty(std::string& PropName, const py::object& Val)
{
	const auto obj = this->Class->FindChildByName(FName(PropName));
	if (!obj)
		return;
	const auto prop = reinterpret_cast<UProperty*>(obj);
	if (!strcmp(obj->Class->GetName(), "Function"))
		reinterpret_cast<FHelper*>(this)->SetProperty(static_cast<UObjectProperty*>(prop), Val);
	else
		reinterpret_cast<FHelper*>(this)->SetProperty(prop, Val);

	if (UnrealSDK::gCallPostEdit)
	{
		FPropertyChangedEvent changeEvent{};
		changeEvent.Property = prop;
		changeEvent.ChangeType = 1; // See: UE4 -- EPropertyChangeType::Unspecified
		PostEditChangeProperty(&changeEvent);
	}
}

void UObject::DumpObject()
{
	LOG(INFO, "*** Property dump for object '%s' ***", this->GetFullName().c_str());
	UStruct* thisField = this->Class;
	while (thisField)
	{
		LOG(INFO, "=== %s properties ===", thisField->GetName());
		for (auto child = thisField->Children; child != nullptr; child = child->Next)
		{
			if (child->IsA(FindClass("Property")))
				LOG(INFO, " %s=%s", child->GetName(),
					py::cast<std::string>(repr(GetProperty(child->GetName()))).c_str());
		}
		thisField = thisField->SuperField;
	}
}

#ifndef UE4
UClass* UObject::StaticClass()
{
	static auto ptr = static_cast<UClass*>(GObjects()->Get(2));
	return ptr;
};
#endif

std::vector<UObject*> UObject::FindAll(char* InStr, bool IncludeSubclasses)
{
	UClass* inClass = FindClass(InStr, true);
	if (!inClass)
		throw std::exception("Unable to find class");
	std::vector<UObject*> ret;
	for (size_t i = 0; i < GObjects()->Count; ++i)
	{
		UObject* object = GObjects()->Get(i);
		if (!object || !object->Class) {
			continue;
		}
		UClass* cls = object->Class;
		do {
			if (cls == inClass) {
				ret.push_back(object);
				break;
			}
			cls = static_cast<UClass*>(cls->SuperField);
		} while (IncludeSubclasses && cls);
	}
	return ret;
}

void* FHelper::GetPropertyAddress(UProperty* Prop, int idx)
{
	return reinterpret_cast<char*>(this) + Prop->Offset_Internal + (idx * Prop->ElementSize);
}


struct FStruct FHelper::GetStructProperty(UProperty* Prop, int idx)
{
	return FStruct{
		static_cast<UStructProperty*>(Prop)->GetStruct(),
		GetPropertyAddress(Prop, idx)
	};
}

struct FString* FHelper::GetStrProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<FString*>(GetPropertyAddress(Prop, idx));
}

class UComponent* FHelper::GetComponentProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<UComponent**>(GetPropertyAddress(Prop, idx))[0];
}

struct FArray FHelper::GetArrayProperty(UProperty* Prop, int idx)
{
	const auto array = reinterpret_cast<TArray<char>*>(GetPropertyAddress(Prop, idx));
	return FArray{ array, static_cast<UArrayProperty*>(Prop)->GetInner()};
}


class UObject* FHelper::GetObjectProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<UObject **>(GetPropertyAddress(Prop, idx))[0];
}

class UClass* FHelper::GetClassProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<UClass **>(GetPropertyAddress(Prop, idx))[0];
}

struct FName* FHelper::GetNameProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<FName*>(GetPropertyAddress(Prop, idx));
}

struct FScriptInterface* FHelper::GetInterfaceProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<FScriptInterface*>(GetPropertyAddress(Prop, idx));
}

struct FScriptDelegate* FHelper::GetDelegateProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<FScriptDelegate*>(GetPropertyAddress(Prop, idx));
}

float FHelper::GetFloatProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<float*>(GetPropertyAddress(Prop, idx))[0];
}

int FHelper::GetIntProperty(UProperty* Prop, int idx) {
	return reinterpret_cast<int*>(GetPropertyAddress(Prop, idx))[0];
}

unsigned char FHelper::GetByteProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<unsigned char*>(GetPropertyAddress(Prop, idx))[0];
}

bool FHelper::GetBoolProperty(UProperty* Prop, int idx)
{
	if (idx != 0) {
		// Pretty sure this is a requirement of the engine, so we'll never actually run into it
		throw py::index_error("FHelper::SetProperty: Bool arrays are not supported");
	}
	return !!(GetIntProperty(Prop, 0) & static_cast<UBoolProperty*>(Prop)->GetMask());
}

#ifdef UE4
py::object FHelper::GetMapProperty(UProperty* Prop, int idx) {
	// TODO: Figure out MapProperty
	UProperty* KeyProp = static_cast<UMapProperty*>(Prop)->KeyProp;
	UProperty* ValueProp = static_cast<UMapProperty*>(Prop)->ValueProp;

	// Its kinda just a mess all around for the UMap stuff :)
	return pybind11::none();
}

/*
	Note: the return of this *CAN* be nullptr much like WeakObjectProperty
	There's technically a distinction between WeakObjectPtr and SoftObjectPtr in which:
		Soft can go from invalid -> valid multiple times
		In a `getall` command, the result isn't a UObject, but instead gives back the string asset path
			^^^ I'm not quite sure if its a good decision if we do this
			Possibly add a few functions of `USoftObjectProperty.GetAssetPath()` and `USoftObjectProperty.GetObject()` where GetObject() can return null
*/
py::object FHelper::GetSoftClassProperty(UProperty* Prop, int idx) {
	FSoftObjectPtr weakObjPtr = reinterpret_cast<FSoftObjectPtr*>(GetPropertyAddress(Prop, idx))[0];
	UClass* classObject = static_cast<UClass*>(weakObjPtr.WeakPtr.Get());
	if (classObject != nullptr)
		return py::cast(classObject);
	else
		return py::cast(weakObjPtr.ObjectID.AssetPathName);
}

py::object FHelper::GetSoftObjectProperty(UProperty* Prop, int idx) {
	FSoftObjectPtr weakObjPtr = reinterpret_cast<FSoftObjectPtr*>(GetPropertyAddress(Prop, idx))[0];
	UObject* weakObj = weakObjPtr.WeakPtr.Get();
	if (weakObj != nullptr)
		return py::cast(weakObj);
	else
		return py::cast(weakObjPtr.ObjectID.AssetPathName);
}

class UObject* FHelper::GetWeakObjectProperty(UProperty* Prop, int idx) {
	TWeakObjectPtr<> weakObjPtr = reinterpret_cast<TWeakObjectPtr<>*>(GetPropertyAddress(Prop, idx))[0];
	UObject* weakObj = weakObjPtr.GetObjectPtr();
	return weakObj;
}

const wchar_t* FHelper::GetTextProperty(UProperty* Prop, int idx) {
	auto addr = GetPropertyAddress(Prop, idx);
	auto z = reinterpret_cast<FText*>(addr);

	FString* ptr = z->GetFString();
	if (ptr != nullptr)
		return ptr->AsString();
	else
		return L"";
}

py::object FHelper::GetSetProperty(UProperty* Prop, int idx) {
	// TODO: Figure out SetProperty
	return pybind11::none();
}

py::object FHelper::GetEnumProperty(UProperty* Prop, int idx) {
	std::string simplifiedEnumName;
	auto& names = static_cast<UEnumProperty*>(Prop)->Enum->Names;

	// TODO: Convert this into a better way of being able to read the value in the respective type
	// Enums aren't always technically going to be uint8_t values.
	// For now this does fine though.
	uint64_t enumValue = reinterpret_cast<unsigned char*>(GetPropertyAddress(Prop, idx))[0];

	// Iterate over all of the available Enum names (ie "EGbxParamValueType::Float")
	for (auto i = 0; i < names.Num(); ++i) {
		auto enumName = names.Get(i);

		if (enumName.Value == enumValue) {
			simplifiedEnumName = enumName.Key.GetName();
			break;
		}
	}
	simplifiedEnumName = simplifiedEnumName.substr(simplifiedEnumName.find_last_of(':') + 1);

	// For example: {"Type": EGbxParamValueType, "Name": "Int", "Value": 2}
	py::dict returnDict;
	returnDict["Type"] = static_cast<UEnumProperty*>(Prop)->Enum;
	returnDict["Name"] = simplifiedEnumName;
	returnDict["Value"] = enumValue;

	return returnDict;
}
#endif

pybind11::object FHelper::GetProperty(UProperty* Prop)
{
	LOG(INTERNAL,
		"FHelper::GetProperty '%s' (offset 0x%x, arraydim %d) (Prop at 0x%p) on 0x%p\n",
		Prop->GetFullName().c_str(),
		Prop->Offset_Internal,
		Prop->ArrayDim,
		Prop,
		this
	);

	py::object (*getter)(FHelper*, UProperty*, int);
	const char* className = Prop->Class->GetName();

	if (!strcmp(className, "StructProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetStructProperty(Prop, idx)); };
	else if (!strcmp(className, "StrProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetStrProperty(Prop, idx)); };
	else if (!strcmp(className, "ObjectProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetObjectProperty(Prop, idx)); };
	#ifndef UE4
	else if (!strcmp(className, "ComponentProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetComponentProperty(Prop, idx)); };
	#endif
	else if (!strcmp(className, "ClassProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetClassProperty(Prop, idx)); };
	else if (!strcmp(className, "NameProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetNameProperty(Prop, idx)); };
	else if (!strcmp(className, "InterfaceProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetInterfaceProperty(Prop, idx)); };
	else if (!strcmp(className, "DelegateProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetDelegateProperty(Prop, idx)); };
	else if (!strcmp(className, "FloatProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetFloatProperty(Prop, idx)); };
	else if (!strcmp(className, "IntProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetIntProperty(Prop, idx)); };
	else if (!strcmp(className, "ByteProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetByteProperty(Prop, idx)); };
	else if (!strcmp(className, "BoolProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetBoolProperty(Prop, idx)); };
	else if (!strcmp(className, "ArrayProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetArrayProperty(Prop, idx)); };
	#ifdef UE4
	// These are probably UE4 specific properties, not quite sure but *eh*
	// They're all basically the same thing as IntProperty, just different return types so I didn't wanna create 300 different new functions for it just cause its they're identical imo
	else if (!strcmp(className, "UInt32Property"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(reinterpret_cast<unsigned int*>(obj->GetPropertyAddress(Prop, idx))[0]); } ;
	else if (!strcmp(className, "UInt64Property"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(reinterpret_cast<unsigned long*>(obj->GetPropertyAddress(Prop, idx))[0]); } ;
	else if (!strcmp(className, "UInt16Property"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(reinterpret_cast<unsigned short*>(obj->GetPropertyAddress(Prop, idx))[0]); } ;
	else if (!strcmp(className, "Int64Property"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(reinterpret_cast<long*>(obj->GetPropertyAddress(Prop, idx))[0]); } ;
	else if (!strcmp(className, "Int16Property"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(reinterpret_cast<short*>(obj->GetPropertyAddress(Prop, idx))[0]); } ;
	else if (!strcmp(className, "Int8Property"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(reinterpret_cast<char*>(obj->GetPropertyAddress(Prop, idx))[0]); } ;
	else if (!strcmp(className, "DoubleProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(reinterpret_cast<double*>(obj->GetPropertyAddress(Prop, idx))[0]); } ;
	else if (!strcmp(className, "EnumProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return obj->GetEnumProperty(static_cast<UEnumProperty*>(Prop), idx); };
	else if (!strcmp(className, "MulticastDelegateProperty"))
		// IMO its best to just pass out the function name, just cause its a delegate, and there's not much else to do with it
		//? Not sure whether or not, it should be `GetFullName` or just `GetName`
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast((static_cast<UMulticastDelegateProperty*>(Prop))->SignatureFunction->GetFullName()); };
	else if (!strcmp(className, "WeakObjectProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetWeakObjectProperty(static_cast<UWeakObjectProperty*>(Prop), idx)); };
	else if (!strcmp(className, "TextProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetTextProperty(static_cast<UTextProperty*>(Prop), idx)); };
	else if (!strcmp(className, "SoftClassProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return obj->GetSoftClassProperty(static_cast<USoftClassProperty*>(Prop), idx); };
	else if (!strcmp(className, "SoftObjectProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return obj->GetSoftObjectProperty(static_cast<USoftObjectProperty*>(Prop), idx); };
	else if (!strcmp(className, "MapProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return obj->GetMapProperty(static_cast<UMapProperty*>(Prop), idx); };
	else if (!strcmp(className, "SetProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return obj->GetSetProperty(static_cast<USetProperty*>(Prop), idx); };
	#endif
	else
		throw std::runtime_error(Util::Format(
			"FHelper::GetProperty got unexpected property type '%s'",
			Prop->GetFullName().c_str()
		).c_str());

	if (Prop->ArrayDim == 1) {
		return getter(this, Prop, 0);
	}

	auto list = pybind11::list();
	for (int i = 0; i < Prop->ArrayDim; i++) {
		list.append(getter(this, Prop, i));
	}

	return list;
}

void FHelper::SetStructProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (py::isinstance<py::tuple>(Val))
	{
		const py::tuple tup = static_cast<py::tuple>(Val);

		unsigned int currentIndex = 0;
		for (auto* child = static_cast<UProperty*>(static_cast<UStructProperty*>(Prop)->GetStruct()->Children); child; child = static_cast<UProperty*>(child->Next))
			currentIndex++;

		if (tup.size() > currentIndex)
		{
			throw std::exception(
				Util::Format("FHelper::SetProperty: Not all tuple values converted for struct!\n").c_str());
		}

		currentIndex = 0;
		for (auto* child = static_cast<UProperty*>(static_cast<UStructProperty*>(Prop)->GetStruct()->Children); child; child = static_cast<UProperty*>(child->Next))
		{
			LOG(INTERNAL, "Child = %s, %d", child->GetFullName().c_str(), child->Offset_Internal);
			if (currentIndex < tup.size())
				reinterpret_cast<FHelper*>(GetPropertyAddress(Prop, idx))->SetProperty(child, tup[currentIndex++]);
		}
	}
	else
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected tuple!");
}

#ifdef UE4

// TODO: UE4 MulticastDelegateProperty Setter

void FHelper::SetTextProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::str>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected string!\n").c_str());
	auto z = reinterpret_cast<FText*>(GetPropertyAddress(Prop, idx));

	if (z->Data) { // Setting the property of a pre-existing string
		auto str = FString(Val.cast<std::wstring>().c_str());
		z->SetString(&str);
	}
	else {

	}
}


// TODO: UE4 MapProperty Setter
// TODO: UE4 SetProperty Setter

// TODO: Look into how this might work, not sure if its even necessary in UE4 idk
void FHelper::SetInterfaceProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	throw std::exception(Util::Format("FHelper::SetProperty: Unknown how to deal with UInterfaceProperty\n").c_str());
}

// TODO: Look into how these Weak/Soft setters work (if they do)
void FHelper::SetWeakObjectProperty(class UProperty* Prop, int idx, const py::object& Val) {
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UObject!\n").c_str());

	TWeakObjectPtr<> weakObjPtr = reinterpret_cast<TWeakObjectPtr<>*>(GetPropertyAddress(Prop, idx))[0];
	UObject* obj = py::isinstance<py::none>(Val) ? nullptr : Val.cast<UObject*>();
	weakObjPtr.SetObjectPtr(obj);
}
void FHelper::SetSoftObjectProperty(class UProperty* Prop, int idx, const py::object& Val) {
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val) && !py::isinstance<py::str>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UObject or string!\n").c_str());

	FSoftObjectPtr weakObjPtr = reinterpret_cast<FSoftObjectPtr*>(GetPropertyAddress(Prop, idx))[0];
	if (py::isinstance<UObject>(Val) || py::isinstance<py::none>(Val)) {
		UObject* obj = py::isinstance<py::none>(Val) ? nullptr : Val.cast<UObject*>();
		weakObjPtr.WeakPtr.Set(obj);
	}
	else {
		FName name = FName(Val.cast<std::string>().c_str());
		memcpy(&weakObjPtr.ObjectID.AssetPathName, &name, sizeof(FName));
	}
}

void FHelper::SetUInt32Property(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int!\n").c_str());
	reinterpret_cast<unsigned int*>(GetPropertyAddress(Prop, idx))[0] = Val.cast<unsigned int>();
}
void FHelper::SetUInt64Property(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UInt64 (int)!\n").c_str());
	reinterpret_cast<unsigned long*>(GetPropertyAddress(Prop, idx))[0] = Val.cast<unsigned long>();
}
void FHelper::SetUInt16Property(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UInt16 (int)!\n").c_str());
	reinterpret_cast<unsigned short*>(GetPropertyAddress(Prop, idx))[0] = Val.cast<unsigned short>();
}
void FHelper::SetInt16Property(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int16 (int)!\n").c_str());
	reinterpret_cast<short*>(GetPropertyAddress(Prop, idx))[0] = Val.cast<short>();
}
void FHelper::SetInt64Property(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int64 (int)!\n").c_str());
	reinterpret_cast<long*>(GetPropertyAddress(Prop, idx))[0] = Val.cast <long>();
}
void FHelper::SetInt8Property(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int8 (int)!\n").c_str());
	reinterpret_cast<char*>(GetPropertyAddress(Prop, idx))[0] = Val.cast <char>();
}

#else

void FHelper::SetInterfaceProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected UObject!");
	if (py::isinstance<py::none>(Val))
		static_cast<FScriptInterface*>(GetPropertyAddress(Prop, idx))[0] = FScriptInterface{ nullptr, nullptr };
	else
	{
		const auto objVal = Val.cast<UObject*>();
		const auto scriptInterface = objVal->QueryInterface(Prop->GetInterfaceClass());
		reinterpret_cast<FScriptInterface*>(GetPropertyAddress(Prop, idx))[0] = scriptInterface;
	}
}

void FHelper::SetComponentProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<UComponent>(Val) && !py::isinstance<py::none>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UComponent!\n").c_str());
	reinterpret_cast<UComponent**>(GetPropertyAddress(Prop, idx))[0] = Val.cast<UComponent*>();
}
#endif

void FHelper::SetStrProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::str>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected string!");

	auto str = FString(Val.cast<std::wstring>().c_str());
	memcpy(GetPropertyAddress(Prop, idx), &str, sizeof(FString));
}

void FHelper::SetObjectProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected UObject!");

	reinterpret_cast<UObject **>(GetPropertyAddress(Prop, idx))[0] = Val.cast<UObject*>();
}

#ifndef UE4
void FHelper::SetComponentProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<UComponent>(Val) && !py::isinstance<py::none>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected UComponent!");

	reinterpret_cast<UComponent **>(GetPropertyAddress(Prop, idx))[0] = Val.cast<UComponent*>();
}
#endif

void FHelper::SetClassProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<UClass>(Val) && !py::isinstance<py::none>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected UClass!");

	reinterpret_cast<UClass * *>(GetPropertyAddress(Prop, idx))[0] = Val.cast<UClass*>();
}

void FHelper::SetNameProperty(class UProperty* Prop, int idx,  const py::object& Val)
{
	if (!py::isinstance<py::str>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected string!");

	auto name = FName(Val.cast<std::string>().c_str());
	memcpy(GetPropertyAddress(Prop, idx), &name, sizeof(FName));
}

void FHelper::SetDelegateProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<FScriptDelegate>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected FScriptDelegate!");

	auto ScriptDelegate = FScriptDelegate(Val.cast<FScriptDelegate>());
	memcpy(
		GetPropertyAddress(Prop, idx),
		&ScriptDelegate,
	    sizeof(FScriptDelegate)
	);
}

void FHelper::SetFloatProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::float_>(Val) && !py::isinstance<py::int_>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected float!");

	reinterpret_cast<float*>(GetPropertyAddress(Prop, idx))[0] = Val.cast<float>();
}

void FHelper::SetIntProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected int!");

	reinterpret_cast<int*>(GetPropertyAddress(Prop, idx))[0] = Val.cast<int>();
}

void FHelper::SetByteProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected int!");

	reinterpret_cast<char*>(GetPropertyAddress(Prop, idx))[0] = static_cast<char>(Val.cast<int>());
}

void FHelper::SetEnumProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val) && !py::isinstance<py::str>(Val) && !py::isinstance<py::dict>(Val) )
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected int/string/dict!");

	int enumValue = 0;
	auto EnumNames = static_cast<UEnumProperty*>(Prop)->Enum->GetNames();

	bool bUnknownEnumValue = true;
	std::wstring acceptableValues = L"";

	if (py::isinstance<py::str>(Val)) {
		std::wstring inputValue = Val.cast<std::wstring>();
		for (std::pair<std::wstring, uint64_t> element : EnumNames) {
			std::wstring Name = element.first;
			std::wstring simplifiedName = element.first.substr(element.first.find_last_of(':') + 1);
			acceptableValues.append(element.first + L", " + simplifiedName + L", ");
			if (inputValue == Name || inputValue == simplifiedName) {
				enumValue = element.second;
				bUnknownEnumValue = false;
				break;
			}
		}

	}
	else if(py::isinstance<py::int_>(Val)) {
		enumValue = Val.cast<int>();

		// Some simple sanity checking in order to make sure you can't set the enum to a value that it can't be
		for (std::pair<std::wstring, uint64_t> element : EnumNames) {
			acceptableValues.append(std::to_wstring(element.second) + L", ");
			if (element.second == enumValue) {
				bUnknownEnumValue = false;
				break;
			}
		}

	}
	else if (py::isinstance<py::dict>(Val)) {
		auto enumDict = Val.cast<py::dict>();
		// Enum dictionary doesn't fit the proper format
		if (!enumDict.contains("Type") || !enumDict.contains("Name") || !enumDict.contains("Value"))
			throw std::exception(Util::Format("FHelper::SetProperty: Unexpected enum value! Enum Dictionary Format: { Type: UEnum, Name: Str, Value: Int}\n").c_str());

		std::wstring ValName = enumDict["Name"].cast<std::wstring>();
		UEnum* ValEnum = enumDict["Type"].cast<UEnum*>();
		enumValue = enumDict["Value"].cast<int>();

		if(ValEnum != static_cast<UEnumProperty*>(Prop)->Enum) // Different enums between inputs
			throw std::exception(Util::Format("FHelper::SetProperty: Unexpected enum value! Cannot convert %s to %s\n", ValEnum->GetName(), static_cast<UEnumProperty*>(Prop)->Enum->GetName()).c_str());

		std::wstring completeName = static_cast<UEnumProperty*>(Prop)->Enum->CppType.AsString();
		completeName.append(L"::" + ValName);

		if (EnumNames.count(completeName) == 0) // If the given name is not valid
			throw std::exception(Util::Format("FHelper::SetProperty: Unexpected enum value! Unknown enum name of %s\n", ValName.c_str()).c_str());


		for (std::pair<std::wstring, uint64_t> element : EnumNames) {
			acceptableValues.append(std::to_wstring(element.second) + L", ");
			if (element.second == enumValue) {
				bUnknownEnumValue = false;
				break;
			}
		}
	}

	acceptableValues = acceptableValues.substr(0, acceptableValues.find_last_of(L","));

	if (bUnknownEnumValue)
		throw std::exception(Util::Format("FHelper::SetProperty: Unexpected enum value! Acceptable values: %s\n", acceptableValues.c_str()).c_str());

	reinterpret_cast<char*>(GetPropertyAddress(Prop, idx))[0] = static_cast<char>(enumValue);
}

void FHelper::SetBoolProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (idx != 0) {
		throw py::index_error("FHelper::SetProperty: Bool arrays are not supported");
	}

	try
	{
		LOG(INTERNAL, "SetBoolProperty %d, mask: 0x%x, base: 0x%x, offset: 0x%x", Val.cast<bool>(), static_cast<UBoolProperty*>(Prop)->GetMask(),
		              this, Prop->Offset_Internal);
		if (Val.cast<bool>())
			reinterpret_cast<unsigned int*>(GetPropertyAddress(Prop, 0))[0] |= static_cast<UBoolProperty*>(Prop)->GetMask();
		else
			reinterpret_cast<unsigned int*>(GetPropertyAddress(Prop, 0))[0] &= ~static_cast<UBoolProperty*>(Prop)->GetMask();
	}
	catch (std::exception e)
	{
		throw std::exception(Util::Format("FHelper::SetProperty: %s\n", e.what()).c_str());
	}
}

void FHelper::SetArrayProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<py::sequence>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected sequence!");

	const auto s = py::reinterpret_borrow<py::sequence>(Val);
	const auto currentArray = reinterpret_cast<TArray<char>*>(GetPropertyAddress(Prop, idx));
	if (s.size() > currentArray->Count)
	{

		// TODO: Test this GMalloc implementation & array resizing
		#ifndef UE4
		char *data = static_cast<char*>(static_cast<tMalloc>(UnrealSDK::pGMalloc[0][0][1])(UnrealSDK::pGMalloc[0], Prop->GetInner()->ElementSize * s.size(), 8));
		#else
		char* data = static_cast<char*>( static_cast<tMalloc>(UnrealSDK::pGMalloc)(static_cast<UArrayProperty*>(Prop)->GetInner()->ElementSize * s.size(), 8));
		#endif

		memset(data, 0, static_cast<UArrayProperty*>(Prop)->GetInner()->ElementSize * s.size());
		currentArray->Data = data;
		currentArray->Max = s.size();

	}
	currentArray->Count = s.size();
	long x = 0;
	for (const auto it : Val)
	{
		reinterpret_cast<FHelper*>(currentArray->Data + (long)static_cast<UArrayProperty*>(Prop)->GetInner()->ElementSize * x++)->SetProperty(
			static_cast<UArrayProperty*>(Prop)->GetInner(), py::reinterpret_borrow<py::object>(it));
	}

}

void FHelper::SetProperty(class UProperty* Prop, const py::object& Val)
{
	LOG(INTERNAL,
		"FHelper::SetProperty '%s' (offset 0x%x, arraydim %d) (Prop at 0x%p) on 0x%p\n",
		Prop->GetFullName().c_str(),
		Prop->Offset_Internal,
		Prop->ArrayDim,
		Prop,
		this
	);

	void (FHelper::*setter)(UProperty*, int, const py::object&);
	const char* ClassName = Prop->Class->GetName();

	if (!strcmp(ClassName, "StructProperty"))
		setter = &FHelper::SetStructProperty;
	else if (!strcmp(ClassName, "StrProperty"))
		setter = &FHelper::SetStrProperty;
	else if (!strcmp(ClassName, "ObjectProperty"))
		setter = &FHelper::SetObjectProperty;
#ifndef UE4
	else if (!strcmp(ClassName, "ComponentProperty"))
		setter = &FHelper::SetComponentProperty;
#endif
	else if (!strcmp(ClassName, "ClassProperty"))
		setter = &FHelper::SetClassProperty;
	else if (!strcmp(ClassName, "NameProperty"))
		setter = &FHelper::SetNameProperty;
	else if (!strcmp(ClassName, "InterfaceProperty"))
		setter = &FHelper::SetInterfaceProperty;
	else if (!strcmp(ClassName, "DelegateProperty"))
		setter = &FHelper::SetDelegateProperty;
	else if (!strcmp(ClassName, "FloatProperty"))
		setter = &FHelper::SetFloatProperty;
	else if (!strcmp(ClassName, "IntProperty"))
		setter = &FHelper::SetIntProperty;
	else if (!strcmp(ClassName, "ByteProperty"))
		setter = &FHelper::SetByteProperty;
	else if (!strcmp(ClassName, "BoolProperty"))
		setter = &FHelper::SetBoolProperty;
	else if (!strcmp(ClassName, "ArrayProperty"))
		setter = &FHelper::SetArrayProperty;
#ifdef UE4
	else if (!strcmp(ClassName, "EnumProperty"))
		setter = &FHelper::SetEnumProperty;
	else if (!strcmp(ClassName, "UInt32Property"))
		setter = &FHelper::SetUInt32Property;
	else if (!strcmp(ClassName, "UInt64Property"))
		setter = &FHelper::SetUInt64Property;
	else if (!strcmp(ClassName, "UInt16Property"))
		setter = &FHelper::SetUInt16Property;
	else if (!strcmp(ClassName, "Int64Property"))
		setter = &FHelper::SetInt64Property;
	else if (!strcmp(ClassName, "Int16Property"))
		setter = &FHelper::SetInt16Property;
	else if (!strcmp(ClassName, "Int8Property"))
		setter = &FHelper::SetInt8Property;
	else if (!strcmp(ClassName, "WeakObjectProperty"))
		setter = &FHelper::SetWeakObjectProperty;
	else if (!strcmp(ClassName, "SoftObjectProperty"))
		setter = &FHelper::SetSoftObjectProperty;
	else if (!strcmp(ClassName, "TextProperty"))
		setter = &FHelper::SetTextProperty;
#endif
	else
		throw std::runtime_error(Util::Format(
			"FHelper::SetProperty got unexpected property type '%s'",
			Prop->GetFullName().c_str()
		).c_str());

	if (Prop->ArrayDim == 1) {
		(this->*setter)(Prop, 0, Val);
		return;
	}

	if (!py::isinstance<py::sequence>(Val)) {
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected sequence!");
	}

	auto seq = py::reinterpret_borrow<py::sequence>(Val);
	auto size = seq.size();

	if (size > (size_t)Prop->ArrayDim) {
		throw py::type_error(Util::Format(
			"FHelper::SetProperty: Sequence is too long, %s supports max of %d values!",
			Prop->GetName(),
			Prop->ArrayDim
		));
	}

	for (size_t i = 0; i < size; i++) {
		(this->*setter)(Prop, i, seq[i]);
	}
	for (size_t i = size; i < (size_t)Prop->ArrayDim; i++) {
		(this->*setter)(Prop, i, py::none());
	}
}

// FFunction =======================================================================

/* Get the given function (PropName) on the UObject, FFunction.func will be null if the function can't be found */
struct FFunction UObject::GetFunction(std::string& PropName)
{
	const auto obj = this->Class->FindChildByName(FName(PropName));
	const auto function = reinterpret_cast<UFunction*>(obj);
	return FFunction{ this, function };
}

FHelper* FFunction::GenerateParams(const py::args& args, const py::kwargs& kwargs, FHelper* params)
{
	unsigned int currentIndex = 0;
	for (UProperty* Child = (UProperty*)func->Children; Child; Child = (UProperty*)Child->Next)
	{
		if (!(Child->PropertyFlags & 0x80)) // Param
			continue;
		if (kwargs.contains(Child->GetName()))
		{
			params->SetProperty(Child, kwargs[Child->GetName()]);
			continue;
		}
		if (currentIndex < args.size())
		{
			params->SetProperty(Child, args[currentIndex++]);
			continue;
		}
		if (Child->PropertyFlags & 0x10) // Optional
			continue;
		if (Child->PropertyFlags & 0x100) // Output
			continue;
		throw std::exception("Invalid number of parameters");
	}
	return params;
}

py::object FFunction::GetReturn(FHelper* params)
{
	std::deque<py::object> ReturnObjects{};
	for (UProperty* Child = (UProperty*)func->Children; Child; Child = (UProperty*)Child->Next)
	{
		if (Child->PropertyFlags & 0x400) // Return
			ReturnObjects.push_front(params->GetProperty(Child));
		else if (Child->PropertyFlags & 0x100) // Output
			ReturnObjects.push_back(params->GetProperty(Child));
	}
	LOG(INTERNAL, "Finished popping return");
	if (ReturnObjects.size() == 1)
		return ReturnObjects[0];
	if (ReturnObjects.size() > 1)
		return cast(ReturnObjects);
	return py::none();
}

py::object FFunction::Call(py::args args, py::kwargs kwargs)
{
	if (!obj || !func)
		return py::none();
	LOG(INTERNAL, "FFunction::Call called %s.%s)", obj->GetFullName().c_str(), func->GetName());

	char params[1000] = "";
	memset(params, 0, 1000);
	GenerateParams(std::move(args), std::move(kwargs), (FHelper*)params);
	LOG(INTERNAL, "made params");

	auto flags = func->FunctionFlags;
	func->FunctionFlags |= 0x400;

#if UE3
	void* returnObj = nullptr;
	for (UProperty* Child = (UProperty*)func->Children; Child; Child = (UProperty*)Child->Next)
		if (Child->PropertyFlags & 0x400)
			returnObj = params + Child->Offset_Internal;

	UnrealSDK::pProcessEvent(obj, func, params, returnObj);
#else
	UnrealSDK::pProcessEvent(obj, func, params);
#endif

	func->FunctionFlags = flags;

	LOG(INTERNAL, "Called ProcessEvent");

	py::object ret = GetReturn((FHelper*)params);
	memset(params, 0, 1000);

	LOG(INTERNAL, "ProcessEvent Succeeded!");
	return ret;
}

// FFrame =======================================================================
void FFrame::SkipFunction()
{
	// allocate temporary memory on the stack for evaluating parameters
	char params[1000] = "";
	memset(params, 0, 1000);
	for (UProperty* Property = (UProperty*)Node->Children; Code[0] != 0x16; Property = (UProperty*)Property->Next)
		UnrealSDK::pFrameStep(this, this->Object,
		                   (void*)((Property->PropertyFlags & 0x100) ? nullptr : params + Property->Offset_Internal));

	Code++;
	memset(params, 0, 1000);
}

// FStruct =======================================================================
pybind11::object FStruct::GetProperty(const std::string& PropName) const
{
	class UObject* obj = structType->FindChildByName(FName(PropName));
	if (!obj)
		return pybind11::none();
	const auto prop = reinterpret_cast<UProperty*>(obj);
	return ((FHelper*)((char*)base))->GetProperty(prop);
}

void FStruct::SetProperty(std::string& PropName, py::object value) const
{
	class UObject* obj = structType->FindChildByName(FName(PropName));
	if (!obj)
		throw std::exception(
			Util::Format("FStruct::SetProperty: Unable to find property '%s'!\n", PropName.c_str()).c_str());
	auto prop = reinterpret_cast<UProperty*>(obj);
	((FHelper*)((char*)base))->SetProperty(prop, std::move(value));
}

py::str FStruct::Repr() const
{
	std::ostringstream output;
	output << "{";

	const UStruct* thisField = structType;
	while (thisField) {
		for (UField* Child = thisField->Children; Child != nullptr; Child = Child->Next) {
			if (Child != thisField->Children) output << ", ";
			output << Child->GetName() << ": " << py::repr(GetProperty(Child->GetName()));
		}
		thisField = thisField->SuperField;
	}
	output << "}";
	return output.str();
}

// FArray =======================================================================
FArray::FArray(TArray<char>* array, UProperty* s)
{
	LOG(INTERNAL, "Creating FArray from %p, count: %d, max: %d", array, array->Count, array->Max);
	arr = array;
	type = s;
	IterCounter = 0;
};

py::object FArray::GetItem(unsigned int i) const
{
	if (i >= arr->Count)
		throw pybind11::index_error();
	return ((FHelper*)(arr->Data + type->ElementSize * (long)i))->GetProperty(type);
}

void FArray::Clear() {
	arr->Empty();
}

void FArray::SetItem(unsigned int i, py::object Obj) const
{
	if (i >= arr->Count)
		throw pybind11::index_error();
	((FHelper*)(arr->Data + type->ElementSize * (long)i))->SetProperty(type, std::move(Obj));
}

long FArray::GetAddress() const
{
	return (long)arr->Data;
}

FArray* FArray::Iter()
{
	IterCounter = 0;
	return this;
}

py::object FArray::Next()
{
	if (IterCounter >= arr->Count)
		throw pybind11::stop_iteration();
	return GetItem(IterCounter++);
}

py::str FArray::Repr() {
	std::ostringstream output;
	output << "[";
	for (unsigned int i = 0; i < arr->Count; i++) {
		if (i > 0) {
			output << ", ";
		}
		output << py::repr(GetItem(i));
	}
	output << "]";
	return output.str();
}
