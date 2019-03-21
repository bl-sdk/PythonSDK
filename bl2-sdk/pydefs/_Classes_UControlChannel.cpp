#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UControlChannel()
{
    py::class_< UControlChannel,  UChannel   >("UControlChannel")
        .def_readonly("UnknownData00", &UControlChannel::UnknownData00)
        .def("StaticClass", &UControlChannel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}