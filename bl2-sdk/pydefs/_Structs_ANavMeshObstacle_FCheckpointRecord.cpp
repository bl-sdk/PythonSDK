#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavMeshObstacle_FCheckpointRecord(py::module &m)
{
    py::class_< ANavMeshObstacle_FCheckpointRecord >(m, "ANavMeshObstacle_FCheckpointRecord")
  ;
}