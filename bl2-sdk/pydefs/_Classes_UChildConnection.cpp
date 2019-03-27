#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChildConnection(py::module &m)
{
    py::class_< UChildConnection,  UNetConnection   >(m, "UChildConnection")
		.def_static("StaticClass", &UChildConnection::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Parent", &UChildConnection::Parent)
          ;
}