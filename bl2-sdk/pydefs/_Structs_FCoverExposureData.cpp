#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverExposureData(py::object m)
{
    py::class_< FCoverExposureData >(m, "FCoverExposureData")
  ;
}