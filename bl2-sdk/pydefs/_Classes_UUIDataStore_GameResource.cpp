#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_GameResource(py::module &m)
{
    py::class_< UUIDataStore_GameResource,  UUIDataStore   >(m, "UUIDataStore_GameResource")
		.def_static("StaticClass", &UUIDataStore_GameResource::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_GameResource::VfTable_IUIListElementProvider)
        .def_readwrite("ElementProviderTypes", &UUIDataStore_GameResource::ElementProviderTypes)
        .def_readwrite("ListElementProviders", &UUIDataStore_GameResource::ListElementProviders)
        .def("FindProviderIndexByFieldValue", &UUIDataStore_GameResource::FindProviderIndexByFieldValue)
        .def("GetProviderFieldValue", &UUIDataStore_GameResource::GetProviderFieldValue)
        .def("GetResourceProviderFields", &UUIDataStore_GameResource::GetResourceProviderFields)
        .def("GetResourceProviders", &UUIDataStore_GameResource::GetResourceProviders)
        .def("GetProviderCount", &UUIDataStore_GameResource::GetProviderCount)
        .def("GenerateProviderAccessTag", &UUIDataStore_GameResource::GenerateProviderAccessTag)
        .def("FindProviderTypeIndex", &UUIDataStore_GameResource::FindProviderTypeIndex)
          ;
}