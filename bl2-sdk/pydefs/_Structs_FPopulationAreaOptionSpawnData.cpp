#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationAreaOptionSpawnData()
{
    class_< FPopulationAreaOptionSpawnData >("FPopulationAreaOptionSpawnData", no_init)
        .def_readwrite("Data", &FPopulationAreaOptionSpawnData::Data)
  ;
}