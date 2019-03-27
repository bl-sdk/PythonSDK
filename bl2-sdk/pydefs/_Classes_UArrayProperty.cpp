#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArrayProperty(py::module &m)
{
    py::class_< UArrayProperty,  UProperty   >(m, "UArrayProperty")
		.def_static("StaticClass", &UArrayProperty::StaticClass, py::return_value_policy::reference)
          ;
}