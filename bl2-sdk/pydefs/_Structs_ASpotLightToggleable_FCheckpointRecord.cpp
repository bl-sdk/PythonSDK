#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASpotLightToggleable_FCheckpointRecord(py::module &m)
{
    py::class_< ASpotLightToggleable_FCheckpointRecord >(m, "ASpotLightToggleable_FCheckpointRecord")
  ;
}