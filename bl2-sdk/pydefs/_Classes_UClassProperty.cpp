#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassProperty(py::module &m)
{
    py::class_< UClassProperty,  UProperty   >(m, "UClassProperty")
		.def_static("StaticClass", &UClassProperty::StaticClass, py::return_value_policy::reference)
          ;
}