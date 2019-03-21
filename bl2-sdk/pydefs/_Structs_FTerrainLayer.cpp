#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainLayer()
{
    class_< FTerrainLayer >("FTerrainLayer", no_init)
        .def_readwrite("Name", &FTerrainLayer::Name)
        .def_readwrite("Setup", &FTerrainLayer::Setup)
        .def_readwrite("AlphaMapIndex", &FTerrainLayer::AlphaMapIndex)
        .def_readwrite("HighlightColor", &FTerrainLayer::HighlightColor)
        .def_readwrite("WireframeColor", &FTerrainLayer::WireframeColor)
  ;
}