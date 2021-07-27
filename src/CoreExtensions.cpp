#include "stdafx.h"
#include <stack>
#include <utility>
#include <sstream>


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
		UObject* object = GObjects()->Data[i];
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
		UObject* object = GObjects()->Data[i];
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

UClass* UObject::StaticClass()
{
	static auto ptr = static_cast<UClass*>(GObjects()->Data[2]);
	return ptr;
};

std::vector<UObject*> UObject::FindAll(char* InStr, bool IncludeSubclasses = false)
{
	UClass* inClass = FindClass(InStr, true);
	if (!inClass)
		throw std::exception("Unable to find class");
	std::vector<UObject*> ret;
	for (size_t i = 0; i < GObjects()->Count; ++i)
	{
		UObject* object = GObjects()->Data[i];
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

class UObject* FHelper::GetObjectProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<UObject **>(GetPropertyAddress(Prop, idx))[0];
}

class UComponent* FHelper::GetComponentProperty(UProperty* Prop, int idx)
{
	return reinterpret_cast<UComponent **>(GetPropertyAddress(Prop, idx))[0];
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

struct FArray FHelper::GetArrayProperty(UProperty* Prop, int idx)
{
	const auto array = reinterpret_cast<TArray<char>*>(GetPropertyAddress(Prop, idx));
	return FArray{ array, static_cast<UArrayProperty*>(Prop)->GetInner()};
}

py::object FHelper::GetProperty(UProperty* Prop)
{
	Logging::LogD(
		"FHelper::GetProperty '%s' (offset 0x%x, arraydim %d) (Prop at 0x%p) on 0x%p\n",
		Prop->GetFullName().c_str(),
	    Prop->Offset_Internal,
		Prop->ArrayDim,
		Prop,
		this
	);

	py::object (*getter)(FHelper*, UProperty*, int);
	const char* ClassName = Prop->Class->GetName();

	if (!strcmp(ClassName, "StructProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetStructProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "StrProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetStrProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "ObjectProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetObjectProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "ComponentProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetComponentProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "ClassProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetClassProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "NameProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetNameProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "InterfaceProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetInterfaceProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "DelegateProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetDelegateProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "FloatProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetFloatProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "IntProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetIntProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "ByteProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetByteProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "BoolProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetBoolProperty(Prop, idx)); };
	else if (!strcmp(ClassName, "ArrayProperty"))
		getter = [](FHelper* obj, UProperty* Prop, int idx) { return py::cast(obj->GetArrayProperty(Prop, idx)); };
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
			Logging::LogD("Child = %s, %d\n", child->GetFullName().c_str(), child->Offset_Internal);
			if (currentIndex < tup.size())
				reinterpret_cast<FHelper*>(GetPropertyAddress(Prop, idx))->SetProperty(child, tup[currentIndex++]);
		}
	}
	else
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected tuple!");
}

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

void FHelper::SetComponentProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<UComponent>(Val) && !py::isinstance<py::none>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected UComponent!");

	reinterpret_cast<UComponent **>(GetPropertyAddress(Prop, idx))[0] = Val.cast<UComponent*>();
}

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

void FHelper::SetInterfaceProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (!py::isinstance<UObject>(Val) && !py::isinstance<py::none>(Val))
		throw py::type_error("FHelper::SetProperty: Got unexpected type, expected UObject!");

	if (py::isinstance<py::none>(Val))
		static_cast<FScriptInterface*>(GetPropertyAddress(Prop, idx))[0] = FScriptInterface{nullptr, nullptr};
	else
	{
		const auto objVal = Val.cast<UObject*>();
		const auto scriptInterface = objVal->QueryInterface(static_cast<UInterfaceProperty*>(Prop)->GetInterfaceClass());
		reinterpret_cast<FScriptInterface*>(GetPropertyAddress(Prop, idx))[0] = scriptInterface;
	}
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

void FHelper::SetBoolProperty(class UProperty* Prop, int idx, const py::object& Val)
{
	if (idx != 0) {
		throw py::index_error("FHelper::SetProperty: Bool arrays are not supported");
	}

	try
	{
		Logging::LogD("SetBoolProperty %d, mask: 0x%x, base: 0x%x, offset: 0x%x\n", Val.cast<bool>(), static_cast<UBoolProperty*>(Prop)->GetMask(),
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
		char *data = static_cast<char*>(static_cast<tMalloc>(UnrealSDK::pGMalloc[0][0][1])(UnrealSDK::pGMalloc[0],
		                                                                           static_cast<UArrayProperty*>(Prop)->GetInner()->ElementSize * s.size(), 8));
		memset(data, 0, static_cast<UArrayProperty*>(Prop)->GetInner()->ElementSize * s.size());
		currentArray->Data = data;
		currentArray->Max = s.size();
	}
	currentArray->Count = s.size();
	int x = 0;
	for (const auto it : Val)
	{
		reinterpret_cast<FHelper*>(currentArray->Data + static_cast<UArrayProperty*>(Prop)->GetInner()->ElementSize * x++)->SetProperty(
			static_cast<UArrayProperty*>(Prop)->GetInner(), py::reinterpret_borrow<py::object>(it));
	}
}

void FHelper::SetProperty(class UProperty* Prop, const py::object& Val)
{
	Logging::LogD(
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
	else if (!strcmp(ClassName, "ComponentProperty"))
		setter = &FHelper::SetComponentProperty;
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

TArray<UObject*>* UObject::GObjects()
{
	const auto objectArray = static_cast<TArray<UObject*>*>(UnrealSDK::pGObjects);
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
	if (UnrealSDK::ClassMap.count(ClassName))
		return UnrealSDK::ClassMap[ClassName];

	if (!Lookup)
		return nullptr;

	for (size_t i = 0; i < GObjects()->Count; ++i)
	{
		const auto object = GObjects()->Data[i];

		if (!object || !object->Class)
			continue;

		// Might as well lookup all objects since we're going to be iterating over most objects regardless
		const char* c = object->Class->GetName();
		if (!strcmp(c, "Class"))
			UnrealSDK::ClassMap[object->GetName()] = static_cast<UClass*>(object);
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
		changeEvent.ChangeType = 1;
		PostEditChangeProperty(&changeEvent);
	}
}


struct FFunction UObject::GetFunction(std::string& PropName)
{
	const auto obj = this->Class->FindChildByName(FName(PropName));
	const auto function = reinterpret_cast<UFunction*>(obj);
	return FFunction{this, function};
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

//class FScriptMap* UObject::GetMapProperty(std::string& PropName) {
//	class UProperty *prop = this->Class->FindPropeFindChildByNamertyByName(FName(PropName));
//	if (!prop || prop->Class->GetName() != "MapProperty")
//		return nullptr;
//	return (FScriptMap *)(((char *)this) + prop->Offset_Internal);
//}
//struct FScriptArray UObject::GetArrayProperty(std::string& PropName);


void FFunction::GenerateParams(const py::args& args, const py::kwargs& kwargs, FHelper* params)
{
	unsigned int currentIndex = 0;
	for (UProperty* Child = (UProperty*)func->Children; Child; Child = (UProperty*)Child->Next)
	{
		if (!(Child->PropertyFlags & 0x80) || Child->PropertyFlags & 0x400) // !Param | Return
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
		if (Child->PropertyFlags & 0x110) // Optional | Output
			continue;
		throw std::exception("Invalid number of parameters");
	}
}

py::object FFunction::GetReturn(FHelper* params)
{
	std::deque<py::object> ReturnObjects{};
	for (UProperty* Child = (UProperty*)func->Children; Child; Child = (UProperty*)Child->Next) {
		if (Child->PropertyFlags & 0x400) { // Return
			ReturnObjects.push_front(params->GetProperty(Child));
		} else if (Child->PropertyFlags & 0x100) { // Output
			ReturnObjects.push_back(params->GetProperty(Child));
		}
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

	void* returnObj = nullptr;
	for (UProperty* Child = (UProperty*)func->Children; Child; Child = (UProperty*)Child->Next)
		if (Child->PropertyFlags & 0x400)
			returnObj = params + Child->Offset_Internal;

	UnrealSDK::pProcessEvent(obj, func, params, returnObj);
	func->FunctionFlags = flags;

	Logging::LogD("Called ProcessEvent\n");

	py::object ret = GetReturn((FHelper*)params);
	memset(params, 0, 1000);

	Logging::LogD("ProcessEvent Succeeded!\n");
	return ret;
}

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

FStruct::FStruct(UStruct* s, void* b)
{
	Logging::LogD("Creating FStruct of type '%s' from %p\n", s->GetObjectName().c_str(), b);
	structType = s;
	base = b;
};

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

py::str FStruct::Repr() const {
	std::ostringstream output;
	output << "{";

	const UStruct* thisField = structType;
	while (thisField) {
		for (UField* Child = thisField->Children; Child != nullptr; Child = Child->Next) {
			if (Child != thisField->Children) {
				output << ", ";
			}
			output << Child->GetName() << ": " << py::repr(GetProperty(Child->GetName()));
		}
		thisField = thisField->SuperField;
	}
	output << "}";
	return output.str();
}

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
	return ((FHelper*)(arr->Data + type->ElementSize * i))->GetProperty(type);
}

void FArray::SetItem(unsigned int I, py::object Obj) const
{
	if (I >= arr->Count)
		throw pybind11::index_error();
	((FHelper*)(arr->Data + type->ElementSize * I))->SetProperty(type, std::move(Obj));
}

int FArray::GetAddress() const
{
	return (int)arr->Data;
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
