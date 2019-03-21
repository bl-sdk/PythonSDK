#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_InputAlias()
{
    class_< UUIDataStore_InputAlias, bases< UUIDataStore_StringBase >  , boost::noncopyable>("UUIDataStore_InputAlias", no_init)
        .def_readwrite("InputAliases", &UUIDataStore_InputAlias::InputAliases)
        .def_readonly("UnknownData00", &UUIDataStore_InputAlias::UnknownData00)
        .def("StaticClass", &UUIDataStore_InputAlias::StaticClass, return_value_policy< reference_existing_object >())
        .def("HasAliasMappingForPlatform", &UUIDataStore_InputAlias::HasAliasMappingForPlatform)
        .def("FindInputAliasIndex", &UUIDataStore_InputAlias::FindInputAliasIndex)
        .def("GetAliasInputKeyDataByIndex", &UUIDataStore_InputAlias::GetAliasInputKeyDataByIndex)
        .def("GetAliasInputKeyData", &UUIDataStore_InputAlias::GetAliasInputKeyData)
        .def("GetAliasInputKeyNameByIndex", &UUIDataStore_InputAlias::GetAliasInputKeyNameByIndex)
        .def("GetAliasInputKeyName", &UUIDataStore_InputAlias::GetAliasInputKeyName)
        .def("GetAliasFontMarkupByIndex", &UUIDataStore_InputAlias::GetAliasFontMarkupByIndex)
        .def("GetAliasFontMarkup", &UUIDataStore_InputAlias::GetAliasFontMarkup)
        .staticmethod("StaticClass")
  ;
}