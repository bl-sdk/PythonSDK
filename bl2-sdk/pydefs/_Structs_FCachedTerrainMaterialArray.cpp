#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCachedTerrainMaterialArray()
{
    class_< FCachedTerrainMaterialArray >("FCachedTerrainMaterialArray", no_init)
        .def_readwrite("CachedMaterials", &FCachedTerrainMaterialArray::CachedMaterials)
  ;
}