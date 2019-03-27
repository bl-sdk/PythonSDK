#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTcpipConnection(py::module &m)
{
    py::class_< UTcpipConnection,  UNetConnection   >(m, "UTcpipConnection")
		.def_static("StaticClass", &UTcpipConnection::StaticClass, py::return_value_policy::reference)
          ;
}