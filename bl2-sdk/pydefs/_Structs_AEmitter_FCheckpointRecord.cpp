#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AEmitter_FCheckpointRecord()
{
    py::class_< AEmitter_FCheckpointRecord >("AEmitter_FCheckpointRecord")
  ;
}