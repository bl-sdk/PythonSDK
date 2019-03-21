#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectSerializer(py::object m)
{
    py::class_< UObjectSerializer,  UObject   >(m, "UObjectSerializer")
        .def_readonly("UnknownData00", &UObjectSerializer::UnknownData00)
        .def("StaticClass", &UObjectSerializer::StaticClass, py::return_value_policy::reference)
          ;
}