#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPolyData(py::object m)
{
    py::class_< FGBXNavMeshPolyData >(m, "FGBXNavMeshPolyData")
        .def_readwrite("CrossLevelConnections", &FGBXNavMeshPolyData::CrossLevelConnections)
        .def_readwrite("SpecialMoves", &FGBXNavMeshPolyData::SpecialMoves)
  ;
}