#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeDensityInfo_FCheckpointRecord(py::object m)
{
    py::class_< AFogVolumeDensityInfo_FCheckpointRecord >(m, "AFogVolumeDensityInfo_FCheckpointRecord")
  ;
}