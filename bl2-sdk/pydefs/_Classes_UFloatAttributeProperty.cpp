#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFloatAttributeProperty(py::object m)
{
    py::class_< UFloatAttributeProperty,  UFloatProperty   >(m, "UFloatAttributeProperty")
        .def_readonly("UnknownData00", &UFloatAttributeProperty::UnknownData00)
        .def("StaticClass", &UFloatAttributeProperty::StaticClass, py::return_value_policy::reference)
          ;
}