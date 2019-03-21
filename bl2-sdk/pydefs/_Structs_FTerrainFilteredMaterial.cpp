#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainFilteredMaterial()
{
    class_< FTerrainFilteredMaterial >("FTerrainFilteredMaterial", no_init)
        .def_readwrite("NoiseScale", &FTerrainFilteredMaterial::NoiseScale)
        .def_readwrite("NoisePercent", &FTerrainFilteredMaterial::NoisePercent)
        .def_readwrite("MinHeight", &FTerrainFilteredMaterial::MinHeight)
        .def_readwrite("MaxHeight", &FTerrainFilteredMaterial::MaxHeight)
        .def_readwrite("MinSlope", &FTerrainFilteredMaterial::MinSlope)
        .def_readwrite("MaxSlope", &FTerrainFilteredMaterial::MaxSlope)
        .def_readwrite("Alpha", &FTerrainFilteredMaterial::Alpha)
        .def_readwrite("Material", &FTerrainFilteredMaterial::Material)
  ;
}