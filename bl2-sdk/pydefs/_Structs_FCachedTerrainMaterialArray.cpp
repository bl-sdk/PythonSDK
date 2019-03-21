#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCachedTerrainMaterialArray()
{
    py::class_< FCachedTerrainMaterialArray >("FCachedTerrainMaterialArray")
        .def_readwrite("CachedMaterials", &FCachedTerrainMaterialArray::CachedMaterials)
  ;
}