#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_GameResource()
{
    class_< UUIDataStore_GameResource, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_GameResource", no_init)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_GameResource::VfTable_IUIListElementProvider)
        .def_readwrite("ElementProviderTypes", &UUIDataStore_GameResource::ElementProviderTypes)
        .def_readwrite("ListElementProviders", &UUIDataStore_GameResource::ListElementProviders)
        .def("StaticClass", &UUIDataStore_GameResource::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindProviderIndexByFieldValue", &UUIDataStore_GameResource::FindProviderIndexByFieldValue)
        .def("GetProviderFieldValue", &UUIDataStore_GameResource::GetProviderFieldValue)
        .def("GetResourceProviderFields", &UUIDataStore_GameResource::GetResourceProviderFields)
        .def("GetResourceProviders", &UUIDataStore_GameResource::GetResourceProviders)
        .def("GetProviderCount", &UUIDataStore_GameResource::GetProviderCount)
        .def("GenerateProviderAccessTag", &UUIDataStore_GameResource::GenerateProviderAccessTag)
        .def("FindProviderTypeIndex", &UUIDataStore_GameResource::FindProviderTypeIndex)
        .staticmethod("StaticClass")
  ;
}