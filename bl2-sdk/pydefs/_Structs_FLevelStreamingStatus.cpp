#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelStreamingStatus()
{
    py::class_< FLevelStreamingStatus >("FLevelStreamingStatus")
        .def_readwrite("PackageName", &FLevelStreamingStatus::PackageName)
  ;
}