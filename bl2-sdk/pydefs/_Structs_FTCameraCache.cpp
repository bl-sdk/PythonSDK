#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTCameraCache(py::module &m)
{
    py::class_< FTCameraCache >(m, "FTCameraCache")
        .def_readwrite("TimeStamp", &FTCameraCache::TimeStamp)
        .def_readwrite("POV", &FTCameraCache::POV)
  ;
}