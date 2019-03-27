#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCachedTerrainMaterialArray(py::module &m)
{
    py::class_< FCachedTerrainMaterialArray >(m, "FCachedTerrainMaterialArray")
        .def_readwrite("CachedMaterials", &FCachedTerrainMaterialArray::CachedMaterials)
  ;
}