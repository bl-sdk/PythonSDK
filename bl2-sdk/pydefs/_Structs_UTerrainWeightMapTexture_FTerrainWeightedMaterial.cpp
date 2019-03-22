#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTerrainWeightMapTexture_FTerrainWeightedMaterial(py::module &m)
{
    py::class_< UTerrainWeightMapTexture_FTerrainWeightedMaterial >(m, "UTerrainWeightMapTexture_FTerrainWeightedMaterial")
  ;
}