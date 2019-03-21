#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavMeshObstacle_FCheckpointRecord()
{
    py::class_< ANavMeshObstacle_FCheckpointRecord >("ANavMeshObstacle_FCheckpointRecord")
  ;
}