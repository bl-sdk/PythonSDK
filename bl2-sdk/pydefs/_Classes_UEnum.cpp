#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEnum(py::object m)
{
    py::class_< UEnum,  UField   >(m, "UEnum")
        .def_readonly("UnknownData00", &UEnum::UnknownData00)
        .def("StaticClass", &UEnum::StaticClass, py::return_value_policy::reference)
          ;
}