#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChildConnection(py::module &m)
{
    py::class_< UChildConnection,  UNetConnection   >(m, "UChildConnection")
        .def_readwrite("Parent", &UChildConnection::Parent)
          ;
}