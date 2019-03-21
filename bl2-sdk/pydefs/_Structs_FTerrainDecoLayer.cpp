#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainDecoLayer(py::object m)
{
    py::class_< FTerrainDecoLayer >(m, "FTerrainDecoLayer")
        .def_readwrite("Name", &FTerrainDecoLayer::Name)
        .def_readwrite("Decorations", &FTerrainDecoLayer::Decorations)
        .def_readwrite("AlphaMapIndex", &FTerrainDecoLayer::AlphaMapIndex)
  ;
}