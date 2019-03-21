#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTerrainWeightMapTexture_FTerrainWeightedMaterial()
{
    py::class_< UTerrainWeightMapTexture_FTerrainWeightedMaterial >("UTerrainWeightMapTexture_FTerrainWeightedMaterial")
  ;
}