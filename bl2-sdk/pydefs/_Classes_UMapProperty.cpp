#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMapProperty()
{
    py::class_< UMapProperty,  UProperty   >("UMapProperty")
        .def_readonly("UnknownData00", &UMapProperty::UnknownData00)
        .def("StaticClass", &UMapProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}