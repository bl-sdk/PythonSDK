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

	// Logging::LogF("Getting parents\n");
	for (auto current = this; current; current = current->Outer) {
		// Logging::LogF("Got parent %p\n", current);
		parents.push(current);
	}
	// Logging::LogF("Got Parents\n");

	std::string output{};

	while (!parents.empty())
	{
		// Logging::LogF("Getting Name\n");
		output += parents.top()->GetName();
		// Logging::LogF("Current output: %s\n", output);
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
	Logging::LogF("*** Property dump for object '%s' ***\n", this->GetFullName().c_str());
	UStruct* thisField = this->Class;
	while (thisField)
	{
		Logging::LogF("=== %s properties ===\n", thisField->GetName());
		for (auto child = thisField->Children; child != nullptr; child = child->Next)
		{
			if (child->IsA(FindClass("Property")))
				Logging::LogF(" %s=%s\n", child->GetName(),
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

// FHelper =======================================================================
void* FHelper::GetPropertyAddress(UProperty* Prop)
{
	return reinterpret_cast<char*>(this) + Prop->Offset_Internal;
}

struct FStruct FHelper::GetStructProperty(UStructProperty* Prop)
{
	return FStruct{Prop->GetStruct(), GetPropertyAddress(Prop)};
}

struct FString* FHelper::GetStrProperty(UProperty* Prop)
{
	return reinterpret_cast<FString*>(GetPropertyAddress(Prop));
}

class UComponent* FHelper::GetComponentProperty(UProperty* Prop)
{
	return reinterpret_cast<UComponent**>(GetPropertyAddress(Prop))[0];
}

py::object FHelper::GetArrayProperty(UArrayProperty* Prop)
{
	const auto array = reinterpret_cast<TArray<char>*>(GetPropertyAddress(Prop));
	return pybind11::cast(FArray{ array, Prop->GetInner() });
}

class UObject* FHelper::GetObjectProperty(UProperty* Prop)
{
	return reinterpret_cast<UObject **>(GetPropertyAddress(Prop))[0];
}

class UClass* FHelper::GetClassProperty(UProperty* Prop)
{
	return reinterpret_cast<UClass **>(GetPropertyAddress(Prop))[0];
}

struct FName* FHelper::GetNameProperty(UProperty* Prop)
{
	return reinterpret_cast<FName*>(GetPropertyAddress(Prop));
}

int FHelper::GetIntProperty(UProperty* Prop)
{
	return reinterpret_cast<int*>(GetPropertyAddress(Prop))[0];
}

struct FScriptInterface* FHelper::GetInterfaceProperty(UProperty* Prop)
{
	return reinterpret_cast<FScriptInterface*>(GetPropertyAddress(Prop));
}

float FHelper::GetFloatProperty(UProperty* Prop)
{
	return reinterpret_cast<float*>(GetPropertyAddress(Prop))[0];
}

struct FScriptDelegate* FHelper::GetDelegateProperty(UProperty* Prop)
{
	return reinterpret_cast<FScriptDelegate*>(GetPropertyAddress(Prop));
}

unsigned char FHelper::GetByteProperty(UProperty* Prop)
{
	return reinterpret_cast<unsigned char*>(GetPropertyAddress(Prop))[0];
}

bool FHelper::GetBoolProperty(UBoolProperty* Prop)
{
	return !!(GetIntProperty(Prop) & Prop->GetMask());
}

#ifdef UE4
py::object FHelper::GetMapProperty(UMapProperty* Prop) {
	// TODO: Figure out MapProperty
	UProperty* KeyProp = Prop->KeyProp;
	UProperty* ValueProp = Prop->ValueProp;

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
py::object FHelper::GetSoftClassProperty(USoftClassProperty* Prop) {
	FSoftObjectPtr weakObjPtr = reinterpret_cast<FSoftObjectPtr*>(GetPropertyAddress(Prop))[0];
	UClass* classObject = static_cast<UClass*>(weakObjPtr.WeakPtr.Get());
	if (classObject != nullptr) 
		return py::cast(classObject);
	else 
		return py::cast(weakObjPtr.ObjectID.AssetPathName);
}

py::object FHelper::GetSoftObjectProperty(USoftObjectProperty* Prop) {
	FSoftObjectPtr weakObjPtr = reinterpret_cast<FSoftObjectPtr*>(GetPropertyAddress(Prop))[0];
	UObject* weakObj = weakObjPtr.WeakPtr.Get();
	if (weakObj != nullptr)
		return py::cast(weakObj);
	else 
		return py::cast(weakObjPtr.ObjectID.AssetPathName);
}

class UObject* FHelper::GetWeakObjectProperty(UWeakObjectProperty* Prop) {
	TWeakObjectPtr<> weakObjPtr = reinterpret_cast<TWeakObjectPtr<>*>(GetPropertyAddress(Prop))[0];	
	UObject* weakObj = weakObjPtr.GetObjectPtr();
	return weakObj;
}

const wchar_t* FHelper::GetTextProperty(UTextProperty* Prop) {
	auto addr = GetPropertyAddress(Prop);
	auto z = reinterpret_cast<FText*>(addr);

	FString* ptr = z->GetFString();
	if (ptr != nullptr) 
		return ptr->AsString();
	else 
		return L"";
}

py::object FHelper::GetSetProperty(USetProperty* Prop) {
	// TODO: Figure out SetProperty
	return pybind11::none();
}

py::object FHelper::GetEnumProperty(UEnumProperty* Prop) {
	std::string simplifiedEnumName;
	auto& names = Prop->Enum->Names;

	// TODO: Convert this into a better way of being able to read the value in the respective type
	// Enums aren't always technically going to be uint8_t values.
	// For now this does fine though.
	uint64_t enumValue = reinterpret_cast<unsigned char*>(GetPropertyAddress(Prop))[0];

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
	returnDict["Type"] = Prop->Enum;
	returnDict["Name"] = simplifiedEnumName;
	returnDict["Value"] = enumValue;

	return returnDict;
}
#endif

pybind11::object FHelper::GetProperty(UProperty* Prop)
{
	Logging::LogD("FHelper::GetProperty '%s' (offset 0x%x) (Prop at 0x%p) on 0x%p\n", Prop->GetFullName().c_str(),
		Prop->Offset_Internal, Prop, this);
	const char* className = Prop->Class->GetName();
	if (!strcmp(className, "StructProperty")) return pybind11::cast(GetStructProperty(static_cast<UStructProperty*>(Prop)));
	if (!strcmp(className, "StrProperty")) return pybind11::cast(GetStrProperty(Prop));
	if (!strcmp(className, "ObjectProperty")) return pybind11::cast(GetObjectProperty(Prop));
	#ifndef UE4
	if (!strcmp(className, "ComponentProperty")) return pybind11::cast(GetComponentProperty(Prop));
	#endif
	if (!strcmp(className, "ClassProperty")) return pybind11::cast(GetClassProperty(Prop));
	if (!strcmp(className, "NameProperty")) return pybind11::cast(GetNameProperty(Prop));
	if (!strcmp(className, "IntProperty")) return pybind11::cast(GetIntProperty(Prop));
	if (!strcmp(className, "InterfaceProperty")) return pybind11::cast(GetInterfaceProperty(Prop));
	if (!strcmp(className, "FloatProperty")) return pybind11::cast(GetFloatProperty(Prop));
	if (!strcmp(className, "DelegateProperty")) return pybind11::cast(GetDelegateProperty(Prop));
	if (!strcmp(className, "ByteProperty")) return pybind11::cast(GetByteProperty(Prop));
	if (!strcmp(className, "BoolProperty")) return pybind11::cast(GetBoolProperty(static_cast<UBoolProperty*>(Prop)));
	if (!strcmp(className, "ArrayProperty")) return GetArrayProperty(static_cast<UArrayProperty*>(Prop));

	#ifdef UE4
	// These are probably UE4 specific properties, not quite sure but *eh*
	// They're all basically the same thing as IntProperty, just different return types so I didn't wanna create 300 different new functions for it just cause its they're identical imo
	if (!strcmp(className, "UInt32Property")) return pybind11::cast(reinterpret_cast<unsigned int*>(GetPropertyAddress(Prop))[0]);
	if (!strcmp(className, "UInt64Property")) return pybind11::cast(reinterpret_cast<unsigned long*>(GetPropertyAddress(Prop))[0]);
	if (!strcmp(className, "UInt16Property")) return pybind11::cast(reinterpret_cast<unsigned short*>(GetPropertyAddress(Prop))[0]);
	if (!strcmp(className, "Int64Property"))  return pybind11::cast(reinterpret_cast<long*>(GetPropertyAddress(Prop))[0]);
	if (!strcmp(className, "Int16Property"))  return pybind11::cast(reinterpret_cast<short*>(GetPropertyAddress(Prop))[0]);
	if (!strcmp(className, "Int8Property"))   return pybind11::cast(reinterpret_cast<char*>(GetPropertyAddress(Prop))[0]);
	if (!strcmp(className, "DoubleProperty")) return pybind11::cast(reinterpret_cast<double*>(GetPropertyAddress(Prop))[0]);

	if (!strcmp(className, "EnumProperty")) return GetEnumProperty(static_cast<UEnumProperty*>(Prop));

	if (!strcmp(className, "MulticastDelegateProperty"))
		//  IMO its best to just pass out the function name, just cause its a delegate, and there's not much else to do with it
		//? Not sure whether or not, it should be `GetFullName` or just `GetName`
		return pybind11::cast((static_cast<UMulticastDelegateProperty*>(Prop))->SignatureFunction->GetFullName());

	if (!strcmp(className, "WeakObjectProperty")) return pybind11::cast(GetWeakObjectProperty(static_cast<UWeakObjectProperty*>(Prop)));
	if (!strcmp(className, "TextProperty")) return pybind11::cast(GetTextProperty(static_cast<UTextProperty*>(Prop)));

	if (!strcmp(className, "SoftClassProperty")) return GetSoftClassProperty(static_cast<USoftClassProperty*>(Prop));
	if (!strcmp(className, "SoftObjectProperty")) return GetSoftObjectProperty(static_cast<USoftObjectProperty*>(Prop));

	if (!strcmp(className, "MapProperty")) return GetMapProperty(static_cast<UMapProperty*>(Prop));
	if (!strcmp(className, "SetProperty")) return GetSetProperty(static_cast<USetProperty*>(Prop));
	#endif

	Util::ThrowException(Util::Format("FHelper::GetProperty got unexpected property type '%s'",
		Prop->Class->GetName()));
}

void FHelper::SetProperty(class UStructProperty* Prop, const py::object& Val)
{
	if (py::isinstance<py::tuple>(Val))
	{
		const py::tuple tup = static_cast<py::tuple>(Val);

		unsigned int currentIndex = 0;
		for (auto* child = static_cast<UProperty*>(Prop->GetStruct()->Children); child; child = static_cast<UProperty*>(child->Next))
			currentIndex++;

		if (tup.size() > currentIndex)
		{
			throw std::exception(
				Util::Format("FHelper::SetProperty: Not all tuple values converted for struct!\n").c_str());
		}

		currentIndex = 0;
		for (auto* child = static_cast<UProperty*>(Prop->GetStruct()->Children); child; child = static_cast<UProperty*>(child->Next))
		{
			Logging::LogD("Child = %s, %d\n", child->GetFullName().c_str(), child->Offset_Internal);
			if (currentIndex < tup.size())
				reinterpret_cast<FHelper*>(GetPropertyAddress(Prop))->SetProperty(child, tup[currentIndex++]);
		}
	}
	else
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected tuple!\n").c_str());
}

#ifdef UE4

// TODO: UE4 MulticastDelegateProperty Setter

void FHelper::SetProperty(class UTextProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<py::str>(Val)) 
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected string!\n").c_str());
	auto z = reinterpret_cast<FText*>(GetPropertyAddress(Prop));

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
void FHelper::SetProperty(class UInterfaceProperty* Prop, const py::object& Val)
{
	throw std::exception(Util::Format("FHelper::SetProperty: Unknown how to deal with UInterfaceProperty\n").c_str());
}

// TODO: Look into how these Weak/Soft setters work (if they do)
void FHelper::SetProperty(class UWeakObjectProperty* Prop, const py::object& Val) {
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UObject!\n").c_str());

	TWeakObjectPtr<> weakObjPtr = reinterpret_cast<TWeakObjectPtr<>*>(GetPropertyAddress(Prop))[0];
	UObject* obj = py::isinstance<py::none>(Val) ? nullptr : Val.cast<UObject*>();
	weakObjPtr.SetObjectPtr(obj);
}
void FHelper::SetProperty(class USoftObjectProperty* Prop, const py::object& Val) {
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val) && !py::isinstance<py::str>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UObject or string!\n").c_str());

	FSoftObjectPtr weakObjPtr = reinterpret_cast<FSoftObjectPtr*>(GetPropertyAddress(Prop))[0];
	if (py::isinstance<UObject>(Val) || py::isinstance<py::none>(Val)) {
		UObject* obj = py::isinstance<py::none>(Val) ? nullptr : Val.cast<UObject*>();
		weakObjPtr.WeakPtr.Set(obj);
	}
	else {
		FName name = FName(Val.cast<std::string>().c_str());
		memcpy(&weakObjPtr.ObjectID.AssetPathName, &name, sizeof(FName));
	}
}

void FHelper::SetProperty(class UUInt32Property* Prop, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int!\n").c_str());
	reinterpret_cast<unsigned int*>(GetPropertyAddress(Prop))[0] = Val.cast<unsigned int>();
}
void FHelper::SetProperty(class UUInt64Property* Prop, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UInt64 (int)!\n").c_str());
	reinterpret_cast<unsigned long*>(GetPropertyAddress(Prop))[0] = Val.cast<unsigned long>();
}
void FHelper::SetProperty(class UUInt16Property* Prop, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UInt16 (int)!\n").c_str());
	reinterpret_cast<unsigned short*>(GetPropertyAddress(Prop))[0] = Val.cast<unsigned short>();
}
void FHelper::SetProperty(class UInt16Property* Prop, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int16 (int)!\n").c_str());
	reinterpret_cast<short*>(GetPropertyAddress(Prop))[0] = Val.cast<short>();
}
void FHelper::SetProperty(class UInt64Property* Prop, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int64 (int)!\n").c_str());
	reinterpret_cast<long*>(GetPropertyAddress(Prop))[0] = Val.cast <long>();
}
void FHelper::SetProperty(class UInt8Property* Prop, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int8 (int)!\n").c_str());
	reinterpret_cast<char*>(GetPropertyAddress(Prop))[0] = Val.cast <char>();
}

#else

void FHelper::SetProperty(class UInterfaceProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UObject!\n").c_str());
	if (py::isinstance<py::none>(Val))
		static_cast<FScriptInterface*>(GetPropertyAddress(Prop))[0] = FScriptInterface{ nullptr, nullptr };
	else
	{
		const auto objVal = Val.cast<UObject*>();
		const auto scriptInterface = objVal->QueryInterface(Prop->GetInterfaceClass());
		reinterpret_cast<FScriptInterface*>(GetPropertyAddress(Prop))[0] = scriptInterface;
	}
}

void FHelper::SetProperty(class UComponentProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<UComponent>(Val) && !py::isinstance<py::none>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UComponent!\n").c_str());
	reinterpret_cast<UComponent**>(GetPropertyAddress(Prop))[0] = Val.cast<UComponent*>();
}
#endif


void FHelper::SetProperty(class UStrProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<py::str>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected string!\n").c_str());
	auto setString = FString(Val.cast<std::wstring>().c_str());

	memcpy(GetPropertyAddress(Prop), &setString, sizeof(FString));
}

void FHelper::SetProperty(class UObjectProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val)) 
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UObject!\n").c_str());
	reinterpret_cast<UObject **>(GetPropertyAddress(Prop))[0] = Val.cast<UObject*>();
}

void FHelper::SetProperty(class UClassProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<UClass>(Val) && !py::isinstance<py::none>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UClass!\n").c_str());
	reinterpret_cast<UClass * *>(GetPropertyAddress(Prop))[0] = Val.cast<UClass*>();
}

void FHelper::SetProperty(class UNameProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<py::str>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected string!\n").c_str());
	auto name = FName(Val.cast<std::string>().c_str());
	memcpy(GetPropertyAddress(Prop), &name, sizeof(FName));
}

void FHelper::SetProperty(class UDelegateProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<FScriptDelegate>(Val)) 
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected FScriptDelegate!\n").c_str());
	auto script = FScriptDelegate(Val.cast<FScriptDelegate>());
	memcpy(GetPropertyAddress(Prop), &script, sizeof(FScriptDelegate));
}

void FHelper::SetProperty(class UFloatProperty* Prop, const py::object& Val)
{
	reinterpret_cast<float*>(GetPropertyAddress(Prop))[0] = Val.cast<float>();
}

void FHelper::SetProperty(class UIntProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int!\n").c_str());
	reinterpret_cast<int*>(GetPropertyAddress(Prop))[0] = Val.cast<int>();
}

void FHelper::SetProperty(class UByteProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<py::int_>(Val)) throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected char!\n").c_str());
	reinterpret_cast<char*>(GetPropertyAddress(Prop))[0] = static_cast<char>(Val.cast<int>());
}

void FHelper::SetProperty(class UEnumProperty* Prop, const py::object& Val)
{

	if (!py::isinstance<py::int_>(Val) && !py::isinstance<py::str>(Val) && !py::isinstance<py::dict>(Val) )
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int/string/dict!\n").c_str());

	int enumValue = 0;
	auto EnumNames = Prop->Enum->GetNames();

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

		if(ValEnum != Prop->Enum) // Different enums between inputs
			throw std::exception(Util::Format("FHelper::SetProperty: Unexpected enum value! Cannot convert %s to %s\n", ValEnum->GetName(), Prop->Enum->GetName()).c_str());

		std::wstring completeName = Prop->Enum->CppType.AsString();
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

	reinterpret_cast<char*>(GetPropertyAddress(Prop))[0] = static_cast<char>(enumValue);
}

void FHelper::SetProperty(class UBoolProperty* Prop, const py::object& Val)
{
	try
	{
		Logging::LogD("SetBoolProperty %d, mask: 0x%x, base: 0x%x, offset: 0x%x\n", Val.cast<bool>(), Prop->GetMask(),
		              this, Prop->Offset_Internal);
		if (Val.cast<bool>())
			reinterpret_cast<unsigned int*>(GetPropertyAddress(Prop))[0] |= Prop->GetMask();
		else
			reinterpret_cast<unsigned int*>(GetPropertyAddress(Prop))[0] &= ~Prop->GetMask();
	}
	catch (std::exception e)
	{
		throw std::exception(Util::Format("FHelper::SetProperty: %s\n", e.what()).c_str());
	}
}

void FHelper::SetProperty(class UArrayProperty* Prop, const py::object& Val)
{
	if (!py::isinstance<py::sequence>(Val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected list!\n").c_str());

	const auto s = py::reinterpret_borrow<py::sequence>(Val);
	const auto currentArray = reinterpret_cast<TArray<char>*>(GetPropertyAddress(Prop));
	if (s.size() > currentArray->Count)
	{

		// TODO: Test this GMalloc implementation & array resizing
		#ifndef UE4
		char *data = static_cast<char*>(static_cast<tMalloc>(UnrealSDK::pGMalloc[0][0][1])(UnrealSDK::pGMalloc[0], Prop->GetInner()->ElementSize * s.size(), 8));
		#else
		char* data = static_cast<char*>( static_cast<tMalloc>(UnrealSDK::pGMalloc)(Prop->GetInner()->ElementSize * s.size(), 8));
		#endif

		memset(data, 0, Prop->GetInner()->ElementSize * s.size());
		currentArray->Data = data;
		currentArray->Max = s.size();

	}
	currentArray->Count = s.size();
	long x = 0;
	for (const auto it : Val)
	{
		reinterpret_cast<FHelper*>(currentArray->Data + (long)Prop->GetInner()->ElementSize * x++)->SetProperty(
			Prop->GetInner(), py::reinterpret_borrow<py::object>(it));
	}

}

void FHelper::SetProperty(class UProperty* Prop, const py::object& val)
{
	const char* cName = Prop->Class->GetName();
	Logging::LogD("FHelper::SetProperty Called with '%s'\n", cName);
	if (!strcmp(cName, "StructProperty"))
		SetProperty(static_cast<UStructProperty*>(Prop), val);
	else if (!strcmp(cName, "StrProperty"))
		SetProperty(static_cast<UStrProperty*>(Prop), val);
	else if (!strcmp(cName, "ObjectProperty"))
		SetProperty(static_cast<UObjectProperty*>(Prop), val);
#ifndef UE4
	else if (!strcmp(cName, "ComponentProperty"))
		SetProperty(static_cast<UComponentProperty*>(Prop), val);
#endif
	else if (!strcmp(cName, "ClassProperty"))
		SetProperty(static_cast<UClassProperty*>(Prop), val);
	else if (!strcmp(cName, "NameProperty"))
		SetProperty(static_cast<UNameProperty*>(Prop), val);
	else if (!strcmp(cName, "IntProperty"))
		SetProperty(static_cast<UIntProperty*>(Prop), val);
	else if (!strcmp(cName, "InterfaceProperty"))
		SetProperty(static_cast<UInterfaceProperty*>(Prop), val);
	else if (!strcmp(cName, "FloatProperty"))
		SetProperty(static_cast<UFloatProperty*>(Prop), val);
	else if (!strcmp(cName, "DelegateProperty"))
		SetProperty(static_cast<UDelegateProperty*>(Prop), val);
	else if (!strcmp(cName, "ByteProperty"))
		SetProperty(static_cast<UByteProperty*>(Prop), val);
	else if (!strcmp(cName, "BoolProperty"))
		SetProperty(static_cast<UBoolProperty*>(Prop), val);
	else if (!strcmp(cName, "ArrayProperty"))
		SetProperty(static_cast<UArrayProperty*>(Prop), val);
#ifdef UE4
	else if (!strcmp(cName, "EnumProperty"))
		SetProperty(static_cast<UEnumProperty*>(Prop), val);
	else if (!strcmp(cName, "UInt32Property")) SetProperty(static_cast<UUInt32Property*>(Prop), val);
	else if (!strcmp(cName, "UInt64Property")) SetProperty(static_cast<UUInt64Property*>(Prop), val);
	else if (!strcmp(cName, "UInt16Property")) SetProperty(static_cast<UUInt16Property*>(Prop), val);
	else if (!strcmp(cName, "Int64Property"))  SetProperty(static_cast<UInt64Property*>(Prop), val);
	else if (!strcmp(cName, "Int16Property"))  SetProperty(static_cast<UInt16Property*>(Prop), val);
	else if (!strcmp(cName, "Int8Property"))   SetProperty(static_cast<UInt8Property*>(Prop), val);
	else if (!strcmp(cName, "WeakObjectProperty")) SetProperty(static_cast<UWeakObjectProperty*>(Prop), val);
	else if (!strcmp(cName, "SoftObjectProperty")) SetProperty(static_cast<USoftObjectProperty*>(Prop), val);
	else if (!strcmp(cName, "TextProperty")) SetProperty(static_cast<UTextProperty*>(Prop), val);
#endif
	else 
		throw std::exception(Util::Format("FHelper::SetProperty got unexpected property type '%s'", Prop->GetFullName().c_str()).c_str());
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
	Logging::LogD("Finished popping return\n");
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
	Logging::LogD("FFunction::Call called %s.%s)\n", obj->GetFullName().c_str(), func->GetName());
	char params[1000] = "";
	memset(params, 0, 1000);
	GenerateParams(std::move(args), std::move(kwargs), (FHelper*)params);
	Logging::LogD("made params\n");
	auto flags = func->FunctionFlags;
	func->FunctionFlags |= 0x400;
	UnrealSDK::pProcessEvent(obj, func, params);
	func->FunctionFlags = flags;
	Logging::LogD("Called ProcessEvent\n");
	py::object ret = GetReturn((FHelper*)params);
	memset(params, 0, 1000);
	Logging::LogD("ProcessEvent Succeeded!\n");
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
	Logging::LogD("Creating FArray from %p, count: %d, max: %d\n", array, array->Count, array->Max);
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