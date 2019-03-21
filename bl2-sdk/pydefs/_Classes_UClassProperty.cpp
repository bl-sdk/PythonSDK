#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassProperty()
{
    py::class_< UClassProperty,  UProperty   >("UClassProperty")
        .def_readonly("UnknownData00", &UClassProperty::UnknownData00)
        .def("StaticClass", &UClassProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}