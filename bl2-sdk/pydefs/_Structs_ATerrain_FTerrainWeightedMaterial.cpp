#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATerrain_FTerrainWeightedMaterial()
{
    class_< ATerrain_FTerrainWeightedMaterial >("ATerrain_FTerrainWeightedMaterial", no_init)
  ;
}