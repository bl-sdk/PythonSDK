#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_DynamicResource()
{
    class_< UUIDataStore_DynamicResource, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_DynamicResource", no_init)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_DynamicResource::VfTable_IUIListElementProvider)
        .def_readwrite("ProfileProvider", &UUIDataStore_DynamicResource::ProfileProvider)
        .def_readwrite("GameResourceDataStore", &UUIDataStore_DynamicResource::GameResourceDataStore)
        .def_readwrite("ResourceProviderDefinitions", &UUIDataStore_DynamicResource::ResourceProviderDefinitions)
        .def_readwrite("ResourceProviders", &UUIDataStore_DynamicResource::ResourceProviders)
        .def("StaticClass", &UUIDataStore_DynamicResource::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}