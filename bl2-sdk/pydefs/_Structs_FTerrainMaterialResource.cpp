#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainMaterialResource()
{
    py::class_< FTerrainMaterialResource >("FTerrainMaterialResource")
  ;
}