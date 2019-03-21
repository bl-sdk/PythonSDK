#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULeviathanChannel()
{
    py::class_< ULeviathanChannel,  UChannel   >("ULeviathanChannel")
        .def_readonly("UnknownData00", &ULeviathanChannel::UnknownData00)
        .def("StaticClass", &ULeviathanChannel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}