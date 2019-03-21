#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UByteProperty()
{
    py::class_< UByteProperty,  UProperty   >("UByteProperty")
        .def_readonly("UnknownData00", &UByteProperty::UnknownData00)
        .def("StaticClass", &UByteProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}