#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTcpNetDriver()
{
    py::class_< UTcpNetDriver,  UNetDriver   >("UTcpNetDriver")
        .def_readonly("UnknownData00", &UTcpNetDriver::UnknownData00)
        .def("StaticClass", &UTcpNetDriver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}