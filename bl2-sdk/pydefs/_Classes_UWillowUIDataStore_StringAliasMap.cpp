#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowUIDataStore_StringAliasMap(py::module &m)
{
    py::class_< UWillowUIDataStore_StringAliasMap,  UUIDataStore_StringAliasMap   >(m, "UWillowUIDataStore_StringAliasMap")
		.def_static("StaticClass", &UWillowUIDataStore_StringAliasMap::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FakePlatform", &UWillowUIDataStore_StringAliasMap::FakePlatform)
        .def("GetStringWithFieldName", &UWillowUIDataStore_StringAliasMap::GetStringWithFieldName)
          ;
}