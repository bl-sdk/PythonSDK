#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATrigger_FCheckpointRecord()
{
    py::class_< ATrigger_FCheckpointRecord >("ATrigger_FCheckpointRecord")
  ;
}