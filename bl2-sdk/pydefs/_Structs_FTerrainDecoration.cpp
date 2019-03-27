#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainDecoration(py::module &m)
{
    py::class_< FTerrainDecoration >(m, "FTerrainDecoration")
        .def_readwrite("Factory", &FTerrainDecoration::Factory)
        .def_readwrite("MinScale", &FTerrainDecoration::MinScale)
        .def_readwrite("MaxScale", &FTerrainDecoration::MaxScale)
        .def_readwrite("Density", &FTerrainDecoration::Density)
        .def_readwrite("SlopeRotationBlend", &FTerrainDecoration::SlopeRotationBlend)
        .def_readwrite("RandSeed", &FTerrainDecoration::RandSeed)
        .def_readwrite("Instances", &FTerrainDecoration::Instances)
  ;
}