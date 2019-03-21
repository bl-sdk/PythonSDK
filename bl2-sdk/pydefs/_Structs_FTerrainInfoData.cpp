#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainInfoData()
{
    class_< FTerrainInfoData >("FTerrainInfoData", no_init)
  ;
}