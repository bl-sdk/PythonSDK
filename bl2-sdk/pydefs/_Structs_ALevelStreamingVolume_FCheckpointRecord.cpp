#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALevelStreamingVolume_FCheckpointRecord()
{
    py::class_< ALevelStreamingVolume_FCheckpointRecord >("ALevelStreamingVolume_FCheckpointRecord")
  ;
}