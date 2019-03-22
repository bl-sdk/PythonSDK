#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPath(py::module &m)
{
    py::class_< FGBXNavMeshPath >(m, "FGBXNavMeshPath")
        .def_readwrite("PathPoints", &FGBXNavMeshPath::PathPoints)
        .def_readwrite("CurrentPathIdx", &FGBXNavMeshPath::CurrentPathIdx)
  ;
}