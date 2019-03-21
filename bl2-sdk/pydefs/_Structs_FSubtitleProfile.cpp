#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSubtitleProfile()
{
    py::class_< FSubtitleProfile >("FSubtitleProfile")
        .def_readwrite("MinX", &FSubtitleProfile::MinX)
        .def_readwrite("MaxX", &FSubtitleProfile::MaxX)
        .def_readwrite("MinY", &FSubtitleProfile::MinY)
        .def_readwrite("MaxY", &FSubtitleProfile::MaxY)
  ;
}