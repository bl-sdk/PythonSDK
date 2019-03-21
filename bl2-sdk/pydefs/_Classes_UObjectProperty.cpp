#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectProperty()
{
    py::class_< UObjectProperty,  UProperty   >("UObjectProperty")
        .def_readonly("UnknownData00", &UObjectProperty::UnknownData00)
        .def("StaticClass", &UObjectProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}