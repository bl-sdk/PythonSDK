#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverExposureData()
{
    py::class_< FCoverExposureData >("FCoverExposureData")
  ;
}