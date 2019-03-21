#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APhysicsVolume_FCheckpointRecord()
{
    py::class_< APhysicsVolume_FCheckpointRecord >("APhysicsVolume_FCheckpointRecord")
  ;
}