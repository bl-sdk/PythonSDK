#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshObstacleData(py::module &m)
{
    py::class_< FGBXNavMeshObstacleData >(m, "FGBXNavMeshObstacleData")
        .def_readwrite("Obstacle", &FGBXNavMeshObstacleData::Obstacle)
        .def_readwrite("MinAffectedPathSize", &FGBXNavMeshObstacleData::MinAffectedPathSize)
  ;
}