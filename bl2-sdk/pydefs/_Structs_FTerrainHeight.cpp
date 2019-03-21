#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainHeight()
{
    class_< FTerrainHeight >("FTerrainHeight", no_init)
  ;
}