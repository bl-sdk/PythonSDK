#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FThumbnailLightData(py::module &m)
{
    py::class_< FThumbnailLightData >(m, "FThumbnailLightData")
        .def_readwrite("Direction", &FThumbnailLightData::Direction)
        .def_readwrite("Light", &FThumbnailLightData::Light)
  ;
}