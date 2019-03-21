#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIAxisEmulationData()
{
    py::class_< FUIAxisEmulationData,  FUIKeyRepeatData   >("FUIAxisEmulationData")
  ;
}