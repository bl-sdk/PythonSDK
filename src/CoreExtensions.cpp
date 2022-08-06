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
					py::cast<std::string>(repr(GetPyProperty(child->GetName()))).c_str());
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


// FFunction =======================================================================

/* Get the given function (PropName) on the UObject, FFunction.func will be null if the function can't be found */
struct FFunction UObject::GetFunction(std::string& PropName)
{
	const auto obj = this->Class->FindChildByName(FName(PropName));
	const auto function = reinterpret_cast<UFunction*>(obj);
	return FFunction{ this, function };
}

void FFunction::GenerateParams(const py::args& args, const py::kwargs& kwargs, PropertyHelper* params)
{
	unsigned int currentIndex = 0;
	for (UProperty* Child = (UProperty*)func->Children; Child; Child = (UProperty*)Child->Next)
	{
		if (!(Child->PropertyFlags & 0x80)) // Param
			continue;
		if (kwargs.contains(Child->GetName()))
		{
			params->SetPyProperty(Child, kwargs[Child->GetName()]);
			continue;
		}
		if (currentIndex < args.size())
		{
			params->SetPyProperty(Child, args[currentIndex++]);
			continue;
		}
		if (Child->PropertyFlags & 0x10) // Optional
			continue;
		if (Child->PropertyFlags & 0x100) // Output
			continue;
		throw std::exception("Invalid number of parameters");
	}
}

py::object FFunction::GetReturn(PropertyHelper* params)
{
	std::deque<py::object> ReturnObjects{};
	for (UProperty* Child = (UProperty*)func->Children; Child; Child = (UProperty*)Child->Next)
	{
		if (Child->PropertyFlags & 0x400) // Return
			ReturnObjects.push_front(params->GetPyProperty(Child));
		else if (Child->PropertyFlags & 0x100) // Output
			ReturnObjects.push_back(params->GetPyProperty(Child));
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
	GenerateParams(std::move(args), std::move(kwargs), (PropertyHelper*)params);
	LOG(INTERNAL, "made params");

	auto flags = func->FunctionFlags;
	func->FunctionFlags |= 0x400;
	UnrealSDK::ProcessEvent(obj, func, params);
	func->FunctionFlags = flags;

	LOG(INTERNAL, "Called ProcessEvent");

	py::object ret = GetReturn((PropertyHelper*)params);
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

py::str FStruct::Repr() const
{
	std::ostringstream output;
	output << "{";

	const UStruct* thisField = structType;
	while (thisField) {
		for (UField* Child = thisField->Children; Child != nullptr; Child = Child->Next) {
			if (Child != thisField->Children) {
				output << ", ";
			}
			output << Child->GetName() << ": "
				   << py::repr(const_cast<FStruct*>(this)->GetPyProperty(Child->GetName()));
			thisField = thisField->SuperField;
		}
	}
	output << "}";
	return output.str();
}

// FArray =======================================================================
FArray::FArray(TArray<uint8_t>* array, UProperty* s)
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
	return ((PropertyHelper*)(arr->Data + type->ElementSize * (long)i))->GetPyProperty(type);
}

void FArray::Clear() {
	arr->Empty();
}

void FArray::SetItem(unsigned int i, py::object Obj) const
{
	if (i >= arr->Count)
		throw pybind11::index_error();
	((PropertyHelper*)(arr->Data + type->ElementSize * (long)i))->SetPyProperty(type, std::move(Obj));
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

int FArray::Length() {
	return arr->Count;
}
