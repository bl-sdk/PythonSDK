#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPath()
{
    py::class_< FGBXNavMeshPath >("FGBXNavMeshPath")
        .def_readwrite("PathPoints", &FGBXNavMeshPath::PathPoints)
        .def_readwrite("CurrentPathIdx", &FGBXNavMeshPath::CurrentPathIdx)
  ;
}