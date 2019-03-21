#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationOptionSpawnDefData()
{
    class_< FPopulationOptionSpawnDefData >("FPopulationOptionSpawnDefData", no_init)
        .def_readwrite("PopulationDefName", &FPopulationOptionSpawnDefData::PopulationDefName)
        .def_readwrite("NumTotalActors", &FPopulationOptionSpawnDefData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionSpawnDefData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionSpawnDefData::NextSpawnTime)
  ;
}