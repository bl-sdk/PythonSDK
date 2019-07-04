#include "stdafx.h"
#include <stack>


UObject* UObject::Load(UClass* ClassToLoad, const char* ObjectFullName)
{
	return UObject::GObjects()->Data[0]->DynamicLoadObject(FString(ObjectFullName), ClassToLoad, true);
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
	bool DoInjectedNext = BL2SDK::injectedCallNext;
	BL2SDK::doInjectedCallNext();
	UObject* ret = UObject::FindObject(FString(ObjectFullName), Class);
	if (DoInjectedNext)
		BL2SDK::doInjectedCallNext();
	return ret;
}

UObject* UObject::Find(const char* ClassName, const char* ObjectFullName)
{
	UClass* classToFind = FindClass(ClassName, true);
	if (classToFind)
		return Find(classToFind, ObjectFullName);
	return nullptr;
}

std::vector<UObject*> UObject::FindObjectsRegex(const std::string& regexString)
{
	std::regex re = std::regex(regexString);
	std::vector<UObject*> ret;
	while (!UObject::GObjects())
		Sleep(100);
	while (!FName::Names())
		Sleep(100);
	for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
	{
		UObject* Object = UObject::GObjects()->Data[i];
		if (Object && std::regex_match(Object->GetFullName(), re))
			ret.push_back(Object);
	}
	return ret;
}
std::vector<UObject*> UObject::FindObjectsContaining(const std::string& stringLookup)
{
	std::vector<UObject*> ret;
	while (!UObject::GObjects())
		Sleep(100);
	while (!FName::Names())
		Sleep(100);
	for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
	{
		UObject* Object = UObject::GObjects()->Data[i];
		if (Object && Object->GetFullName().find(stringLookup) != std::string::npos)
			ret.push_back(Object);
	}
	return ret;
}

class UPackage* UObject::GetPackageObject() {
	UObject* pkg = nullptr;
	UObject* outer = this->Outer;
	while (outer) {
		pkg = outer;
		outer = pkg->Outer;
	}
	return (UPackage*)pkg;
};

UClass* UObject::StaticClass()
{
	static auto ptr = (UClass*)GObjects()->Data[2];
	return ptr;
};

std::vector<UObject*> UObject::FindAll(char* instr) {
	UClass* inclass = FindClass(instr, true);
	if (!inclass)
		throw std::exception("Unable to find class");
	std::vector<UObject*> ret;
	for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
	{
		UObject* Object = UObject::GObjects()->Data[i];
		if (Object && Object->Class == inclass)
			ret.push_back(Object);
	}
	return ret;
}


struct FStruct FHelper::GetStructProperty(UStructProperty* prop) {
	return FStruct{ prop->GetStruct(), ((char*)this) + prop->Offset_Internal };
}

struct FString* FHelper::GetStrProperty(UProperty* prop) {
	return (FString*)(((char*)this) + prop->Offset_Internal);
}

class UObject* FHelper::GetObjectProperty(UProperty* prop) {
	return ((UObject * *)(((char*)this) + prop->Offset_Internal))[0];
}

class UComponent* FHelper::GetComponentProperty(UProperty* prop) {
	return ((UComponent * *)(((char*)this) + prop->Offset_Internal))[0];
}

class UClass* FHelper::GetClassProperty(UProperty* prop) {
	return ((UClass * *)(((char*)this) + prop->Offset_Internal))[0];
}

struct FName* FHelper::GetNameProperty(UProperty* prop) {
	return (FName*)(((char*)this) + prop->Offset_Internal);
}

int FHelper::GetIntProperty(UProperty* prop) {
	return ((int*)(((char*)this) + prop->Offset_Internal))[0];
}

struct FScriptInterface* FHelper::GetInterfaceProperty(UProperty* prop) {
	return (FScriptInterface*)(((char*)this) + prop->Offset_Internal);
}

float FHelper::GetFloatProperty(UProperty* prop) {
	return ((float*)(((char*)this) + prop->Offset_Internal))[0];
}

struct FScriptDelegate* FHelper::GetDelegateProperty(UProperty* prop) {
	return (FScriptDelegate*)(((char*)this) + prop->Offset_Internal);
}

unsigned char FHelper::GetByteProperty(UProperty* prop) {
	return (((unsigned char*)this) + prop->Offset_Internal)[0];
}

bool FHelper::GetBoolProperty(UBoolProperty* boolProp) {
	return !!(((unsigned int*)(((char*)this) + boolProp->Offset_Internal))[0] & boolProp->GetMask());
}

py::object FHelper::GetArrayProperty(UArrayProperty* prop) {
	Logging::LogD("FHelper::GetArrayProperty Inner '%s'\n", prop->GetInner()->GetFullName().c_str());
	return pybind11::cast(FArray{ (TArray<char>*)(((char*)this) + prop->Offset_Internal), prop->GetInner() });
}

pybind11::object FHelper::GetProperty(UProperty* prop) {
	Logging::LogD("FHelper::GetProperty '%s' (offset 0x%x) (prop at 0x%p) on 0x%p\n", prop->GetFullName().c_str(), prop->Offset_Internal, prop, this);
	if (!strcmp(prop->Class->GetName(), "StructProperty"))
		return pybind11::cast(GetStructProperty(static_cast<UStructProperty*>(prop)));
	else if (!strcmp(prop->Class->GetName(), "StrProperty"))
		return pybind11::cast(GetStrProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "ObjectProperty"))
		return pybind11::cast(GetObjectProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "ComponentProperty"))
		return pybind11::cast(GetComponentProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "ClassProperty"))
		return pybind11::cast(GetClassProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "NameProperty"))
		return pybind11::cast(GetNameProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "IntProperty"))
		return pybind11::cast(GetIntProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "InterfaceProperty"))
		return pybind11::cast(GetInterfaceProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "FloatProperty"))
		return pybind11::cast(GetFloatProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "DelegateProperty"))
		return pybind11::cast(GetDelegateProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "ByteProperty"))
		return pybind11::cast(GetByteProperty(prop));
	else if (!strcmp(prop->Class->GetName(), "BoolProperty"))
		return pybind11::cast(GetBoolProperty(static_cast<UBoolProperty*>(prop)));
	else if (!strcmp(prop->Class->GetName(), "ArrayProperty"))
		return GetArrayProperty(static_cast<UArrayProperty*>(prop));
	throw std::exception(Util::Format("FHelper::GetProperty got unexpected property type '%s'", prop->GetFullName().c_str()).c_str());
	return py::none();
}

void FHelper::SetProperty(class UStructProperty* prop, py::object val) {
	if (py::isinstance<py::tuple>(val))
	{
		py::tuple tup = (py::tuple)val;

		unsigned int currentIndex = 0;
		for (UProperty* Child = (UProperty*)prop->GetStruct()->Children; Child; Child = (UProperty*)Child->Next)
			currentIndex++;

		if (tup.size() > currentIndex) {
			throw std::exception(Util::Format("FHelper::SetProperty: Not all tuple values converted for struct!\n").c_str());
		}

		currentIndex = 0;
		for (UProperty* Child = (UProperty*)prop->GetStruct()->Children; Child; Child = (UProperty*)Child->Next) {
			Logging::LogD("Child = %s, %d\n", Child->GetFullName().c_str(), Child->Offset_Internal);
			if (currentIndex < tup.size())
				((FHelper*)(((char*)this) + prop->Offset_Internal))->SetProperty(Child, tup[currentIndex++]);
		}
	}
	else
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected tuple!\n").c_str());
}

void FHelper::SetProperty(class UStrProperty* prop, py::object val) {
	if (!py::isinstance<py::str>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected string!\n").c_str());
	memcpy(((char*)this) + prop->Offset_Internal, &FString(val.cast<std::string>().c_str()), sizeof(FString));
}

void FHelper::SetProperty(class UObjectProperty* prop, py::object val) {
	if (!py::isinstance<UObject>(val) && !py::isinstance<py::none>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UObject!\n").c_str());
	((UObject * *)(((char*)this) + prop->Offset_Internal))[0] = val.cast<UObject*>();
}

void FHelper::SetProperty(class UComponentProperty* prop, py::object val) {
	if (!py::isinstance<UComponent>(val) && !py::isinstance<py::none>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UComponent!\n").c_str());
	((UComponent * *)(((char*)this) + prop->Offset_Internal))[0] = val.cast<UComponent*>();
}

void FHelper::SetProperty(class UClassProperty* prop, py::object val) {
	if (!py::isinstance<UClass>(val) && !py::isinstance<py::none>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UClass!\n").c_str());
	((UClass * *)(((char*)this) + prop->Offset_Internal))[0] = val.cast<UClass*>();
}

void FHelper::SetProperty(class UNameProperty* prop, py::object val) {
	if (!py::isinstance<py::str>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected string!\n").c_str());
	memcpy(((char*)this) + prop->Offset_Internal, &FName(val.cast<std::string>().c_str()), sizeof(FName));
}

void FHelper::SetProperty(class UInterfaceProperty* prop, py::object val) {
	if (!py::isinstance<UObject>(val) && !py::isinstance<py::none>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected UObject!\n").c_str());
	if (py::isinstance<py::none>(val))
		((FScriptInterface*)(((char*)this) + prop->Offset_Internal))[0] = FScriptInterface{ 0, 0 };
	else {
		UObject* ObjVal = val.cast<UObject*>();
		const FScriptInterface interf = ObjVal->QueryInterface(prop->GetInterfaceClass());
		((FScriptInterface*)(((char*)this) + prop->Offset_Internal))[0] = interf;
	}
}

void FHelper::SetProperty(class UDelegateProperty* prop, py::object val) {
	if (!py::isinstance<FScriptDelegate>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected FScriptDelegate!\n").c_str());
	memcpy(((char*)this) + prop->Offset_Internal, &FScriptDelegate(val.cast<FScriptDelegate>()), sizeof(FScriptDelegate));
}

void FHelper::SetProperty(class UFloatProperty* prop, py::object val) {
	Logging::LogD("Set %f\n", val.cast<float>());
	((float*)(((char*)this) + prop->Offset_Internal))[0] = val.cast<float>();
}

void FHelper::SetProperty(class UIntProperty* prop, py::object val) {
	if (!py::isinstance<py::int_>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected int!\n").c_str());
	((int*)(((char*)this) + prop->Offset_Internal))[0] = val.cast<int>();
}

void FHelper::SetProperty(class UByteProperty* prop, py::object val) {
	if (!py::isinstance<py::int_>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected (char!\n").c_str());
	(((char*)this) + prop->Offset_Internal)[0] = (char)val.cast<int>();
}

void FHelper::SetProperty(class UBoolProperty* prop, py::object val) {
	try {
		Logging::LogD("SetBoolProperty %d, mask: 0x%x, base: 0x%x, offset: 0x%x\n", val.cast<bool>(), prop->GetMask(), this, prop->Offset_Internal);
		if (val.cast<bool>())
			((unsigned int*)(((char*)this) + prop->Offset_Internal))[0] |= prop->GetMask();
		else
			((unsigned int*)(((char*)this) + prop->Offset_Internal))[0] &= ~prop->GetMask();
	}
	catch (std::exception e) {
		throw std::exception(Util::Format("FHelper::SetProperty: %s\n", e.what()).c_str());
	}
}

void FHelper::SetProperty(class UArrayProperty* prop, py::object val) {
	if (!py::isinstance<py::sequence>(val))
		throw std::exception(Util::Format("FHelper::SetProperty: Got unexpected type, expected list!\n").c_str());
	const auto s = py::reinterpret_borrow<py::sequence>(val);
	if (s.size() > ((TArray<void*>*)(((char*)this) + prop->Offset_Internal))->Count) {
		char* Data = (char*)((tMalloc)BL2SDK::pGMalloc[0]->VfTable[1])(BL2SDK::pGMalloc[0], prop->GetInner()->ElementSize * s.size(), 8);
		memset(Data, 0, prop->GetInner()->ElementSize * s.size());
		((TArray<char>*)(((char*)this) + prop->Offset_Internal))->Data = Data;
		((TArray<char>*)(((char*)this) + prop->Offset_Internal))->Max = s.size();
	}
	((TArray<char>*)(((char*)this) + prop->Offset_Internal))->Count = s.size();
	char* Data = ((TArray<char>*)(((char*)this) + prop->Offset_Internal))->Data;
	int x = 0;
	for (auto it : val) {
		((FHelper*)(Data + prop->GetInner()->ElementSize * x++))->SetProperty(prop->GetInner(), py::reinterpret_borrow<py::object>(it));
	}
}

void FHelper::SetProperty(class UProperty* Prop, const py::object val) {
	Logging::LogD("FHelper::SetProperty Called with '%s'\n", Prop->GetFullName().c_str());
	if (!strcmp(Prop->Class->GetName(), "StructProperty"))
		SetProperty(static_cast<UStructProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "StrProperty"))
		SetProperty(static_cast<UStrProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "ObjectProperty"))
		SetProperty(static_cast<UObjectProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "ComponentProperty"))
		SetProperty(static_cast<UComponentProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "ClassProperty"))
		SetProperty(static_cast<UClassProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "NameProperty"))
		SetProperty(static_cast<UNameProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "IntProperty"))
		SetProperty(static_cast<UIntProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "InterfaceProperty"))
		SetProperty(static_cast<UInterfaceProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "FloatProperty"))
		SetProperty(static_cast<UFloatProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "DelegateProperty"))
		SetProperty(static_cast<UDelegateProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "ByteProperty"))
		SetProperty(static_cast<UByteProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "BoolProperty"))
		SetProperty(static_cast<UBoolProperty*>(Prop), val);
	else if (!strcmp(Prop->Class->GetName(), "ArrayProperty"))
		SetProperty(static_cast<UArrayProperty*>(Prop), val);
	else
		throw std::exception(Util::Format("FHelper::SetProperty got unexpected property type '%s'", Prop->GetFullName().c_str()).c_str());
}

TArray< UObject* >* UObject::GObjects()
{
	const auto objectArray = static_cast<TArray<UObject*>*>(BL2SDK::pGObjects);
	return objectArray;
}

const char* UObject::GetName() const
{
	return this->Name.GetName();
}

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

	for (auto current = this; current; current = current->Outer)
		parents.push(current);

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

std::string UObject::GetFullName()
{
	if (!this->Class)
		return "(null)";

	std::string output = this->Class->GetName();
	output += " ";

	output += GetObjectName();

	return output;
}

UClass* UObject::FindClass(const char* ClassName, const bool Lookup)
{
	if (BL2SDK::ClassMap.count(ClassName))
		return BL2SDK::ClassMap[ClassName];

	if (!Lookup)
		return nullptr;

	for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
	{
		const auto object = UObject::GObjects()->Data[i];

		if (!object || !object->Class)
			continue;

		// Might as well lookup all objects since we're going to be iterating over most objects regardless
		const char* c = object->Class->GetName();
		if (!strcmp(c, "Class"))
			BL2SDK::ClassMap[object->GetName()] = static_cast<UClass*>(object);
	}
	if (BL2SDK::ClassMap.count(ClassName))
		return BL2SDK::ClassMap[ClassName];
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


pybind11::object UObject::GetProperty(std::string PropName) {
	const auto obj = this->Class->FindChildByName(FName(PropName));
	if (!obj)
		return pybind11::none();
	const auto prop = reinterpret_cast<UProperty*>(obj);
	if (!strcmp(obj->Class->GetName(), "Function"))
		return pybind11::cast(GetFunction(PropName));
	else
		return ((FHelper*)((char*)this))->GetProperty(prop);
}

void UObject::SetProperty(std::string& PropName, const py::object Val) {
	const auto obj = this->Class->FindChildByName(FName(PropName));
	if (!obj)
		return;
	const auto prop = reinterpret_cast<UProperty*>(obj);
	if (!strcmp(obj->Class->GetName(), "Function"))
		((FHelper*)((char*)this))->SetProperty((UObjectProperty*)prop, Val);
	else
		((FHelper*)((char*)this))->SetProperty(prop, Val);
	if (BL2SDK::CallPostEdit) {
		FPropertyChangedEvent ChangeEvent{};
		ChangeEvent.Property = prop;
		ChangeEvent.ChangeType = 1;
		PostEditChangeProperty(&ChangeEvent);
	}
}


struct FFunction UObject::GetFunction(std::string& PropName) {
	const auto obj = this->Class->FindChildByName(FName(PropName));
	const auto function = reinterpret_cast<UFunction*>(obj);
	return FFunction{ this, function };
}

void UObject::DumpObject() {
	Logging::LogF("*** Property dump for object '%s' ***\n", this->GetFullName().c_str());
	UStruct* thisField = this->Class;
	while (thisField)
	{
		Logging::LogF("=== %s properties ===\n", thisField->GetName());
		for (auto child = thisField->Children; child != nullptr; child = child->Next) {
			if (child->IsA(FindClass("Property")))
				Logging::LogF(" %s=%s\n", child->GetName(), py::cast<std::string>(py::repr(GetProperty(child->GetName()))).c_str());
		}
		thisField = thisField->SuperField;
	}
}

//class FScriptMap* UObject::GetMapProperty(std::string& PropName) {
//	class UProperty *prop = this->Class->FindPropeFindChildByNamertyByName(FName(PropName));
//	if (!prop || prop->Class->GetName() != "MapProperty")
//		return nullptr;
//	return (FScriptMap *)(((char *)this) + prop->Offset_Internal);
//}
//struct FScriptArray UObject::GetArrayProperty(std::string& PropName);

