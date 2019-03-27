#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATerrain_FTerrainWeightedMaterial(py::module &m)
{
    py::class_< ATerrain_FTerrainWeightedMaterial >(m, "ATerrain_FTerrainWeightedMaterial")
  ;
}