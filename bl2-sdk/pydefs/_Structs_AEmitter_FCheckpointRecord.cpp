#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AEmitter_FCheckpointRecord(py::module &m)
{
    py::class_< AEmitter_FCheckpointRecord >(m, "AEmitter_FCheckpointRecord")
  ;
}