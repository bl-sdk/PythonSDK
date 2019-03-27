#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNameProperty(py::module &m)
{
    py::class_< UNameProperty,  UProperty   >(m, "UNameProperty")
		.def_static("StaticClass", &UNameProperty::StaticClass, py::return_value_policy::reference)
          ;
}