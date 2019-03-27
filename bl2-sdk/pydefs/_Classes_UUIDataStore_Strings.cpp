#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Strings(py::module &m)
{
    py::class_< UUIDataStore_Strings,  UUIDataStore_StringBase   >(m, "UUIDataStore_Strings")
		.def_static("StaticClass", &UUIDataStore_Strings::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LocFileProviders", &UUIDataStore_Strings::LocFileProviders)
          ;
}