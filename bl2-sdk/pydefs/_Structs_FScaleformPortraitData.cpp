#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScaleformPortraitData()
{
    py::class_< FScaleformPortraitData >("FScaleformPortraitData")
        .def_readwrite("ScaleformName", &FScaleformPortraitData::ScaleformName)
        .def_readwrite("PortraitMovie", &FScaleformPortraitData::PortraitMovie)
  ;
}