#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFloatAttributeProperty()
{
    py::class_< UFloatAttributeProperty,  UFloatProperty   >("UFloatAttributeProperty")
        .def_readonly("UnknownData00", &UFloatAttributeProperty::UnknownData00)
        .def("StaticClass", &UFloatAttributeProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}