#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIntProperty(py::module &m)
{
    py::class_< UIntProperty,  UProperty   >(m, "UIntProperty")
		.def_static("StaticClass", &UIntProperty::StaticClass, py::return_value_policy::reference)
          ;
}