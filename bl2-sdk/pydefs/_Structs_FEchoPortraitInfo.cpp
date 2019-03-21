#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEchoPortraitInfo(py::object m)
{
    py::class_< FEchoPortraitInfo >(m, "FEchoPortraitInfo")
        .def_readwrite("PortraitType", &FEchoPortraitInfo::PortraitType)
        .def_readwrite("ScaleformPortrait", &FEchoPortraitInfo::ScaleformPortrait)
        .def_readwrite("VideoPortrait", &FEchoPortraitInfo::VideoPortrait)
  ;
}