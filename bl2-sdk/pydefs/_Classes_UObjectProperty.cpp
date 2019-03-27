#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectProperty(py::module &m)
{
    py::class_< UObjectProperty,  UProperty   >(m, "UObjectProperty")
		.def_static("StaticClass", &UObjectProperty::StaticClass, py::return_value_policy::reference)
          ;
}