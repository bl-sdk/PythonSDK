#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_InputAlias(py::module &m)
{
    py::class_< UUIDataStore_InputAlias,  UUIDataStore_StringBase   >(m, "UUIDataStore_InputAlias")
        .def_readwrite("InputAliases", &UUIDataStore_InputAlias::InputAliases)
        .def("HasAliasMappingForPlatform", &UUIDataStore_InputAlias::HasAliasMappingForPlatform)
        .def("FindInputAliasIndex", &UUIDataStore_InputAlias::FindInputAliasIndex)
        .def("GetAliasInputKeyDataByIndex", &UUIDataStore_InputAlias::GetAliasInputKeyDataByIndex)
        .def("GetAliasInputKeyData", &UUIDataStore_InputAlias::GetAliasInputKeyData)
        .def("GetAliasInputKeyNameByIndex", &UUIDataStore_InputAlias::GetAliasInputKeyNameByIndex)
        .def("GetAliasInputKeyName", &UUIDataStore_InputAlias::GetAliasInputKeyName)
        .def("GetAliasFontMarkupByIndex", &UUIDataStore_InputAlias::GetAliasFontMarkupByIndex)
        .def("GetAliasFontMarkup", &UUIDataStore_InputAlias::GetAliasFontMarkup)
          ;
}