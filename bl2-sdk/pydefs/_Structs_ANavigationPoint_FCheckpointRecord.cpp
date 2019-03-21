#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavigationPoint_FCheckpointRecord()
{
    py::class_< ANavigationPoint_FCheckpointRecord >("ANavigationPoint_FCheckpointRecord")
  ;
}