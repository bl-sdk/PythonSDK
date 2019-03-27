#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFloatAttributeProperty(py::module &m)
{
    py::class_< UFloatAttributeProperty,  UFloatProperty   >(m, "UFloatAttributeProperty")
		.def_static("StaticClass", &UFloatAttributeProperty::StaticClass, py::return_value_policy::reference)
          ;
}