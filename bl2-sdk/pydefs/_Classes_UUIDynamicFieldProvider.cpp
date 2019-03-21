#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDynamicFieldProvider()
{
    py::class_< UUIDynamicFieldProvider,  UUIDataProvider   >("UUIDynamicFieldProvider")
        .def_readwrite("PersistentDataFields", &UUIDynamicFieldProvider::PersistentDataFields)
        .def_readwrite("RuntimeDataFields", &UUIDynamicFieldProvider::RuntimeDataFields)
        .def_readwrite("PersistentCollectionData", &UUIDynamicFieldProvider::PersistentCollectionData)
        .def_readwrite("RuntimeCollectionData", &UUIDynamicFieldProvider::RuntimeCollectionData)
        .def("StaticClass", &UUIDynamicFieldProvider::StaticClass, py::return_value_policy::reference)
        .def("FindCollectionValueIndex", &UUIDynamicFieldProvider::FindCollectionValueIndex)
        .def("GetCollectionValue", &UUIDynamicFieldProvider::GetCollectionValue)
        .def("ClearCollectionValueArray", &UUIDynamicFieldProvider::ClearCollectionValueArray)
        .def("ReplaceCollectionValueByIndex", &UUIDynamicFieldProvider::ReplaceCollectionValueByIndex)
        .def("ReplaceCollectionValue", &UUIDynamicFieldProvider::ReplaceCollectionValue)
        .def("RemoveCollectionValueByIndex", &UUIDynamicFieldProvider::RemoveCollectionValueByIndex)
        .def("RemoveCollectionValue", &UUIDynamicFieldProvider::RemoveCollectionValue)
        .def("InsertCollectionValue", &UUIDynamicFieldProvider::InsertCollectionValue)
        .def("SetCollectionValueArray", &UUIDynamicFieldProvider::SetCollectionValueArray)
        .def("GetCollectionValueArray", &UUIDynamicFieldProvider::GetCollectionValueArray)
        .def("GetCollectionValueSchema", &UUIDynamicFieldProvider::GetCollectionValueSchema)
        .def("SavePersistentProviderData", &UUIDynamicFieldProvider::SavePersistentProviderData)
        .def("SetField", &UUIDynamicFieldProvider::SetField)
        .def("GetField", &UUIDynamicFieldProvider::GetField)
        .def("ClearFields", &UUIDynamicFieldProvider::ClearFields)
        .def("FindFieldIndex", &UUIDynamicFieldProvider::FindFieldIndex)
        .def("RemoveField", &UUIDynamicFieldProvider::RemoveField)
        .def("AddField", &UUIDynamicFieldProvider::AddField)
        .def("InitializeRuntimeFields", &UUIDynamicFieldProvider::InitializeRuntimeFields)
        .staticmethod("StaticClass")
  ;
}