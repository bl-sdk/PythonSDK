#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainDecoration()
{
    class_< FTerrainDecoration >("FTerrainDecoration", no_init)
        .def_readwrite("Factory", &FTerrainDecoration::Factory)
        .def_readwrite("MinScale", &FTerrainDecoration::MinScale)
        .def_readwrite("MaxScale", &FTerrainDecoration::MaxScale)
        .def_readwrite("Density", &FTerrainDecoration::Density)
        .def_readwrite("SlopeRotationBlend", &FTerrainDecoration::SlopeRotationBlend)
        .def_readwrite("RandSeed", &FTerrainDecoration::RandSeed)
        .def_readwrite("Instances", &FTerrainDecoration::Instances)
  ;
}