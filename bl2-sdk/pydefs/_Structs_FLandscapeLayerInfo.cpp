#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLandscapeLayerInfo(py::module &m)
{
    py::class_< FLandscapeLayerInfo >(m, "FLandscapeLayerInfo")
        .def_readwrite("LayerName", &FLandscapeLayerInfo::LayerName)
        .def_readwrite("Hardness", &FLandscapeLayerInfo::Hardness)
  ;
}