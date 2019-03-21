#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATerrain_FTerrainWeightedMaterial()
{
    py::class_< ATerrain_FTerrainWeightedMaterial >("ATerrain_FTerrainWeightedMaterial")
  ;
}