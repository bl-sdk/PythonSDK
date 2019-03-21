#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPerPlayerSplitscreenData(py::object m)
{
    py::class_< FPerPlayerSplitscreenData >(m, "FPerPlayerSplitscreenData")
        .def_readwrite("SizeX", &FPerPlayerSplitscreenData::SizeX)
        .def_readwrite("SizeY", &FPerPlayerSplitscreenData::SizeY)
        .def_readwrite("OriginX", &FPerPlayerSplitscreenData::OriginX)
        .def_readwrite("OriginY", &FPerPlayerSplitscreenData::OriginY)
  ;
}