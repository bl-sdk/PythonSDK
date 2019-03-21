#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTcpipConnection(py::object m)
{
    py::class_< UTcpipConnection,  UNetConnection   >(m, "UTcpipConnection")
        .def("StaticClass", &UTcpipConnection::StaticClass, py::return_value_policy::reference)
          ;
}