#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FThumbnailLightData()
{
    py::class_< FThumbnailLightData >("FThumbnailLightData")
        .def_readwrite("Direction", &FThumbnailLightData::Direction)
        .def_readwrite("Light", &FThumbnailLightData::Light)
  ;
}