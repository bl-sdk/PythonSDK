#include "stdafx.h"

#ifndef UE4
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_Core_classes(py::module_ &m)
{
	py::class_< UObject >(m, "UObject")
		.def_static("StaticClass", &UObject::StaticClass, py::return_value_policy::reference)
		.def_static("FindClass", &UObject::FindClass, py::return_value_policy::reference)
		.def_static("FindObjectsRegex", &UObject::FindObjectsRegex, py::return_value_policy::reference)
		.def_static("FindObjectsContaining", &UObject::FindObjectsContaining, py::return_value_policy::reference)
		.def_readwrite("HashNext", &UObject::HashNext, py::return_value_policy::reference)
		.def_readwrite("HashOuterNext", &UObject::HashOuterNext, py::return_value_policy::reference)
		.def_readwrite("StateFrame", &UObject::StateFrame, py::return_value_policy::reference)
		.def_readwrite("Linker", &UObject::Linker, py::return_value_policy::reference)
		.def_readwrite("LinkerIndex", &UObject::LinkerIndex, py::return_value_policy::reference)
		.def_readwrite("ObjectInternalInteger", &UObject::ObjectInternalInteger)
		.def_readwrite("ObjectArchetype", &UObject::ObjectArchetype, py::return_value_policy::reference)

		.def_readwrite("ObjectFlags", &UObject::ObjectFlags, py::return_value_policy::reference)
		.def_readwrite("InternalIndex", &UObject::InternalIndex)
		.def_readwrite("Outer", &UObject::Outer, py::return_value_policy::reference)
		.def_readwrite("Name", &UObject::Name, py::return_value_policy::reference)
		.def_readwrite("Class", &UObject::Class, py::return_value_policy::reference)
		.def_static("FindAll", &UObject::FindAll, py::return_value_policy::reference)
		.def("GetPackageObject", &UObject::GetPackageObject, py::return_value_policy::reference)
		.def("GetName", &UObject::GetName)
		.def("GetNameCPP", &UObject::GetNameCpp)
		.def("GetFullName", &UObject::GetFullName)
		.def("GetObjectName", &UObject::GetObjectName)
		.def("DumpObject", &UObject::DumpObject)
		.def("__repr__", &UObject::GetFullName)
		.def("__getattr__", &UObject::GetPyProperty, py::return_value_policy::reference)
		.def("__setattr__", &UObject::SetPyProperty, py::return_value_policy::reference)
		.def("GetAddress", [](UObject *self) { return (intptr_t)self; })
		;
	py::class_< UInterface, UObject >(m, "UInterface")
		;
	py::class_< UField, UObject >(m, "UField")
		.def_readwrite("Next", &UField::Next, py::return_value_policy::reference)
		;
	py::class_< UStruct, UField >(m, "UStruct")
		.def_readwrite("SuperField", &UStruct::SuperField, py::return_value_policy::reference)
		.def_readwrite("Children", &UStruct::Children, py::return_value_policy::reference)
		.def_readwrite("PropertySize", &UStruct::PropertySize)
		.def("FindChildByName", &UStruct::FindChildByName, py::return_value_policy::reference)
		;
	py::class_< UScriptStruct, UStruct >(m, "UScriptStruct")
		;
	py::class_< UFunction, UStruct >(m, "UFunction")
		.def_readwrite("FunctionFlags", &UFunction::FunctionFlags)
		.def_readwrite("RepOffset", &UFunction::RepOffset)
		.def_readwrite("NumParams", &UFunction::NumParams)
		.def_readwrite("ParamsSize", &UFunction::ParamsSize)
		.def_readwrite("ReturnValueOffset", &UFunction::ReturnValueOffset)
		.def_readwrite("Func", &UFunction::Func, py::return_value_policy::reference)
		;
	py::class_< FFunction >(m, "FFunction")
		.def("__call__", &FFunction::PyCall, py::return_value_policy::reference)
		.def_readwrite("obj", &FFunction::obj, py::return_value_policy::reference)
		.def_readwrite("func", &FFunction::func, py::return_value_policy::reference)
		;

	py::class_< UProperty, UField >(m, "UProperty")
		.def_readwrite("ArrayDim", &UProperty::ArrayDim)
		.def_readwrite("ElementSize", &UProperty::ElementSize)
		.def_readwrite("PropertyFlags", &UProperty::PropertyFlags)
		.def_readwrite("PropertyLinkNext", &UProperty::PropertyLinkNext, py::return_value_policy::reference)
		.def_readwrite("Offset_Internal", &UProperty::Offset_Internal)
		;

	py::class_< UStructProperty, UProperty >(m, "UStructProperty")
		.def("GetStruct", &UStructProperty::GetStruct, py::return_value_policy::reference)
		;
	py::class_< UStrProperty, UProperty >(m, "UStrProperty")
		;
	py::class_< UObjectProperty, UProperty >(m, "UObjectProperty")
		;
	py::class_< UComponentProperty, UProperty >(m, "UComponentProperty")
		;
	py::class_< UClassProperty, UObjectProperty >(m, "UClassProperty")
		;
	py::class_< UNameProperty, UProperty >(m, "UNameProperty")
		;
	py::class_< UMapProperty, UProperty >(m, "UMapProperty")
		;
	py::class_< UIntProperty, UProperty >(m, "UIntProperty")
		;
	py::class_< UIntAttributeProperty, UIntProperty >(m, "UIntAttributeProperty")
		;
	py::class_< UInterfaceProperty, UProperty >(m, "UInterfaceProperty")
		;
	py::class_< UFloatProperty, UProperty >(m, "UFloatProperty")
		;
	py::class_< UFloatAttributeProperty, UFloatProperty >(m, "UFloatAttributeProperty")
		;
	py::class_< UDelegateProperty, UProperty >(m, "UDelegateProperty")
		;
	py::class_< UByteProperty, UProperty >(m, "UByteProperty")
		;
	py::class_< UByteAttributeProperty, UByteProperty >(m, "UByteAttributeProperty")
		;
	py::class_< UBoolProperty, UProperty >(m, "UBoolProperty")
		.def("GetMask", &UBoolProperty::GetMask, py::return_value_policy::reference)
		;
	py::class_< UArrayProperty, UProperty >(m, "UArrayProperty")
		.def("GetInner", &UArrayProperty::GetInner, py::return_value_policy::reference)
		;
	py::class_< UEnum, UField >(m, "UEnum")
		;
	py::class_< UConst, UField >(m, "UConst")
		;
	py::class_< UComponent, UObject >(m, "UComponent")
		.def_readwrite("TemplateOwnerClass", &UComponent::TemplateOwnerClass, py::return_value_policy::reference)
		.def_readwrite("TemplateName", &UComponent::TemplateName, py::return_value_policy::reference)
		;

	py::class_< UState, UStruct >(m, "UState")
		;
	py::class_< UPackage, UObject >(m, "UPackage")
		;
	py::class_< UClass, UState >(m, "UClass")
		.def_static("StaticClass", &UClass::StaticClass, py::return_value_policy::reference)
		.def_property("bCooked", [](UClass &self) {return self.bCooked; }, [](UClass &self, bool value) {self.bCooked = value ? 1 : 0; })
		.def_readwrite("ClassAddReferencedObjects", &UClass::ClassAddReferencedObjects)
		.def_readwrite("ClassCastFlags", &UClass::ClassCastFlags)
		.def_readwrite("ClassConfigName", &UClass::ClassConfigName)
		.def_readwrite("ClassConstructor", &UClass::ClassConstructor)
		.def_readwrite("ClassDefaultObject", &UClass::ClassDefaultObject, py::return_value_policy::reference)
		.def_readwrite("ClassFlags", &UClass::ClassFlags)
		;
	py::class_< FStruct >(m, "FStruct")
		.def(py::init<UStruct *, void *>())
		.def("__getattr__", &FStruct::GetPyProperty, py::return_value_policy::reference)
		.def("__setattr__", &FStruct::SetPyProperty, py::return_value_policy::reference)
		.def("__repr__", &FStruct::Repr)
		.def_readwrite("structType", &FStruct::structType, py::return_value_policy::reference)
		.def("GetBase", [](FStruct *self) { return (int)self->base; })
		;

	py::class_< FArray >(m, "FArray")
		.def(py::init<TArray<uint8_t>*, UProperty *>())
		.def("__getitem__", &FArray::GetPyItem, py::return_value_policy::reference)
		.def("__setitem__", &FArray::SetPyItem, py::return_value_policy::reference)
		.def("__iter__", &FArray::Iter, py::return_value_policy::reference)
		.def("__next__", &FArray::Next, py::return_value_policy::reference)
		.def("__repr__", &FArray::Repr)
		.def("__len__", &FArray::Length)
		.def("GetDataAddress", [](FArray* self) { return (intptr_t)self->arr->Data; });

	py::class_ < FScriptInterface >(m, "FScriptInterface")
		.def(py::init<>())
		.def("GetAddress", [](FScriptInterface *self) { return (intptr_t)&self; })
		.def("GetInterfacePointer", [](FScriptInterface *self) { return (int)self->InterfacePointer; })
		.def_readwrite("ObjectPointer", &FScriptInterface::ObjectPointer)
		.def_readwrite("InterfacePointer", &FScriptInterface::InterfacePointer);

}

#endif
