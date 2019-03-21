#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArrayProperty()
{
    py::class_< UArrayProperty,  UProperty   >("UArrayProperty")
        .def_readonly("UnknownData00", &UArrayProperty::UnknownData00)
        .def("StaticClass", &UArrayProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}