#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStrProperty(py::module &m)
{
    py::class_< UStrProperty,  UProperty   >(m, "UStrProperty")
		.def_static("StaticClass", &UStrProperty::StaticClass, py::return_value_policy::reference)
          ;
}