#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIAxisEmulationData(py::object m)
{
    py::class_< FUIAxisEmulationData,  FUIKeyRepeatData   >(m, "FUIAxisEmulationData")
  ;
}