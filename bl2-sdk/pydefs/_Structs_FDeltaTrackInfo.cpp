#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeltaTrackInfo(py::object m)
{
    py::class_< FDeltaTrackInfo >(m, "FDeltaTrackInfo")
  ;
}