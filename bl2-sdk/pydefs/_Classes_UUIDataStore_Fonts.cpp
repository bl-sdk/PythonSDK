#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Fonts(py::module &m)
{
    py::class_< UUIDataStore_Fonts,  UUIDataStore   >(m, "UUIDataStore_Fonts")
		.def_static("StaticClass", &UUIDataStore_Fonts::StaticClass, py::return_value_policy::reference)
          ;
}