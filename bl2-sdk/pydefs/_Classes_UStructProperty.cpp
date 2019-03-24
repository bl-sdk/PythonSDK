#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStructProperty(py::module &m)
{
    py::class_< UStructProperty,  UProperty   >(m, "UStructProperty")
		.def_static("StaticClass", &UStructProperty::StaticClass, py::return_value_policy::reference)
          ;
}