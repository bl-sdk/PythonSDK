#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIntAttributeProperty()
{
    py::class_< UIntAttributeProperty,  UIntProperty   >("UIntAttributeProperty")
        .def_readonly("UnknownData00", &UIntAttributeProperty::UnknownData00)
        .def("StaticClass", &UIntAttributeProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}