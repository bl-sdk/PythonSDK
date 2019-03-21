#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeDensityInfo_FCheckpointRecord()
{
    py::class_< AFogVolumeDensityInfo_FCheckpointRecord >("AFogVolumeDensityInfo_FCheckpointRecord")
  ;
}