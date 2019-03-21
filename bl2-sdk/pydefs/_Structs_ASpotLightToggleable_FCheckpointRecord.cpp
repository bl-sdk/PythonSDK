#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASpotLightToggleable_FCheckpointRecord()
{
    py::class_< ASpotLightToggleable_FCheckpointRecord >("ASpotLightToggleable_FCheckpointRecord")
  ;
}