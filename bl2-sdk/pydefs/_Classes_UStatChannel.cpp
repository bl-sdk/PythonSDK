#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatChannel()
{
    py::class_< UStatChannel,  UChannel   >("UStatChannel")
        .def_readonly("UnknownData00", &UStatChannel::UnknownData00)
        .def("StaticClass", &UStatChannel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}