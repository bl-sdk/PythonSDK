#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEnum()
{
    py::class_< UEnum,  UField   >("UEnum")
        .def_readonly("UnknownData00", &UEnum::UnknownData00)
        .def("StaticClass", &UEnum::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}