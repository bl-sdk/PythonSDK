#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScaleformPortraitData(py::module &m)
{
    py::class_< FScaleformPortraitData >(m, "FScaleformPortraitData")
        .def_readwrite("ScaleformName", &FScaleformPortraitData::ScaleformName)
        .def_readwrite("PortraitMovie", &FScaleformPortraitData::PortraitMovie)
  ;
}