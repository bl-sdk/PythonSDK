#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_DynamicResource(py::object m)
{
    py::class_< UUIDataStore_DynamicResource,  UUIDataStore   >(m, "UUIDataStore_DynamicResource")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_DynamicResource::VfTable_IUIListElementProvider)
        .def_readwrite("ProfileProvider", &UUIDataStore_DynamicResource::ProfileProvider)
        .def_readwrite("GameResourceDataStore", &UUIDataStore_DynamicResource::GameResourceDataStore)
        .def_readwrite("ResourceProviderDefinitions", &UUIDataStore_DynamicResource::ResourceProviderDefinitions)
        .def_readwrite("ResourceProviders", &UUIDataStore_DynamicResource::ResourceProviders)
        .def("StaticClass", &UUIDataStore_DynamicResource::StaticClass, py::return_value_policy::reference)
        .def("eventUnregistered", &UUIDataStore_DynamicResource::eventUnregistered)
        .def("eventRegistered", &UUIDataStore_DynamicResource::eventRegistered)
        .def("OnLoginChange", &UUIDataStore_DynamicResource::OnLoginChange)
        .def("FindProviderIndexByFieldValue", &UUIDataStore_DynamicResource::FindProviderIndexByFieldValue)
        .def("GetProviderFieldValue", &UUIDataStore_DynamicResource::GetProviderFieldValue)
        .def("GetResourceProviderFields", &UUIDataStore_DynamicResource::GetResourceProviderFields)
        .def("GetResourceProviders", &UUIDataStore_DynamicResource::GetResourceProviders)
        .def("GetProviderCount", &UUIDataStore_DynamicResource::GetProviderCount)
        .def("GenerateProviderAccessTag", &UUIDataStore_DynamicResource::GenerateProviderAccessTag)
        .def("FindProviderTypeIndex", &UUIDataStore_DynamicResource::FindProviderTypeIndex)
          ;
}