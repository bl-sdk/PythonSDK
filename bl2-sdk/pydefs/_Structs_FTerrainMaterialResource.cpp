#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainMaterialResource()
{
    class_< FTerrainMaterialResource >("FTerrainMaterialResource", no_init)
  ;
}