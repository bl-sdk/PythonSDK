#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelStreamingStatus(py::object m)
{
    py::class_< FLevelStreamingStatus >(m, "FLevelStreamingStatus")
        .def_readwrite("PackageName", &FLevelStreamingStatus::PackageName)
  ;
}