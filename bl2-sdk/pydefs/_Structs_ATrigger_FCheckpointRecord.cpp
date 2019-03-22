#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATrigger_FCheckpointRecord(py::module &m)
{
    py::class_< ATrigger_FCheckpointRecord >(m, "ATrigger_FCheckpointRecord")
  ;
}