#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectSerializer()
{
    py::class_< UObjectSerializer,  UObject   >("UObjectSerializer")
        .def_readonly("UnknownData00", &UObjectSerializer::UnknownData00)
        .def("StaticClass", &UObjectSerializer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}