#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainDecoLayer()
{
    class_< FTerrainDecoLayer >("FTerrainDecoLayer", no_init)
        .def_readwrite("Name", &FTerrainDecoLayer::Name)
        .def_readwrite("Decorations", &FTerrainDecoLayer::Decorations)
        .def_readwrite("AlphaMapIndex", &FTerrainDecoLayer::AlphaMapIndex)
  ;
}