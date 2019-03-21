#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainLayer(py::object m)
{
    py::class_< FTerrainLayer >(m, "FTerrainLayer")
        .def_readwrite("Name", &FTerrainLayer::Name)
        .def_readwrite("Setup", &FTerrainLayer::Setup)
        .def_readwrite("AlphaMapIndex", &FTerrainLayer::AlphaMapIndex)
        .def_readwrite("HighlightColor", &FTerrainLayer::HighlightColor)
        .def_readwrite("WireframeColor", &FTerrainLayer::WireframeColor)
  ;
}