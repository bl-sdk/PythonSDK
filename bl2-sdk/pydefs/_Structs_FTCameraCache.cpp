#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTCameraCache()
{
    py::class_< FTCameraCache >("FTCameraCache")
        .def_readwrite("TimeStamp", &FTCameraCache::TimeStamp)
        .def_readwrite("POV", &FTCameraCache::POV)
  ;
}