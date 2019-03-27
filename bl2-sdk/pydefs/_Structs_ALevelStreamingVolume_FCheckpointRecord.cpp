#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALevelStreamingVolume_FCheckpointRecord(py::module &m)
{
    py::class_< ALevelStreamingVolume_FCheckpointRecord >(m, "ALevelStreamingVolume_FCheckpointRecord")
  ;
}