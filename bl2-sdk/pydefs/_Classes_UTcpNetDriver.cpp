#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTcpNetDriver(py::object m)
{
    py::class_< UTcpNetDriver,  UNetDriver   >(m, "UTcpNetDriver")
        .def_readonly("UnknownData00", &UTcpNetDriver::UnknownData00)
        .def("StaticClass", &UTcpNetDriver::StaticClass, py::return_value_policy::reference)
          ;
}