#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainMaterialResource(py::module &m)
{
    py::class_< FTerrainMaterialResource >(m, "FTerrainMaterialResource")
  ;
}