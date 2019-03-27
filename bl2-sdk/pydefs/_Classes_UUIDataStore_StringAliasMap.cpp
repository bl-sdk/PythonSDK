#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_StringAliasMap(py::module &m)
{
    py::class_< UUIDataStore_StringAliasMap,  UUIDataStore   >(m, "UUIDataStore_StringAliasMap")
		.def_static("StaticClass", &UUIDataStore_StringAliasMap::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MenuInputMapArray", &UUIDataStore_StringAliasMap::MenuInputMapArray)
        .def_readwrite("MenuInputSets", &UUIDataStore_StringAliasMap::MenuInputSets)
        .def_readwrite("PlayerIndex", &UUIDataStore_StringAliasMap::PlayerIndex)
        .def("GetStringWithFieldName", &UUIDataStore_StringAliasMap::GetStringWithFieldName)
        .def("FindMappingWithFieldName", &UUIDataStore_StringAliasMap::FindMappingWithFieldName)
        .def("GetPlayerOwner", &UUIDataStore_StringAliasMap::GetPlayerOwner, py::return_value_policy::reference)
          ;
}