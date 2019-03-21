#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBoolProperty()
{
    py::class_< UBoolProperty,  UProperty   >("UBoolProperty")
        .def_readonly("UnknownData00", &UBoolProperty::UnknownData00)
        .def("StaticClass", &UBoolProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}