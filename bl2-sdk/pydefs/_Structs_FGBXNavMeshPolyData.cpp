#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPolyData()
{
    py::class_< FGBXNavMeshPolyData >("FGBXNavMeshPolyData")
        .def_readwrite("CrossLevelConnections", &FGBXNavMeshPolyData::CrossLevelConnections)
        .def_readwrite("SpecialMoves", &FGBXNavMeshPolyData::SpecialMoves)
        .def_readonly("Obstacles", &FGBXNavMeshPolyData::Obstacles)
  ;
}