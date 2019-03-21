#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APointLightToggleable_FCheckpointRecord()
{
    py::class_< APointLightToggleable_FCheckpointRecord >("APointLightToggleable_FCheckpointRecord")
  ;
}