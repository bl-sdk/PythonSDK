#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChannel()
{
    py::class_< UChannel,  UObject   >("UChannel")
        .def_readonly("UnknownData00", &UChannel::UnknownData00)
        .def("StaticClass", &UChannel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}