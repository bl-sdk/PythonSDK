#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLandscapeLayerInfo()
{
    py::class_< FLandscapeLayerInfo >("FLandscapeLayerInfo")
        .def_readwrite("LayerName", &FLandscapeLayerInfo::LayerName)
        .def_readwrite("Hardness", &FLandscapeLayerInfo::Hardness)
  ;
}