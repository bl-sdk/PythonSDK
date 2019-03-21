#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainDecoLayer()
{
    py::class_< FTerrainDecoLayer >("FTerrainDecoLayer")
        .def_readwrite("Name", &FTerrainDecoLayer::Name)
        .def_readwrite("Decorations", &FTerrainDecoLayer::Decorations)
        .def_readwrite("AlphaMapIndex", &FTerrainDecoLayer::AlphaMapIndex)
  ;
}