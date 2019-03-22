#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDynamicNavMeshConnection(py::module &m)
{
    py::class_< FDynamicNavMeshConnection >(m, "FDynamicNavMeshConnection")
        .def_readwrite("MaxConnectionDistance", &FDynamicNavMeshConnection::MaxConnectionDistance)
        .def_readwrite("ConnectedPoint", &FDynamicNavMeshConnection::ConnectedPoint)
  ;
}