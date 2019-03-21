#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationOptionSpawnData()
{
    class_< FPopulationOptionSpawnData >("FPopulationOptionSpawnData", no_init)
        .def_readwrite("PopulationDefName", &FPopulationOptionSpawnData::PopulationDefName)
        .def_readwrite("MaxActiveActors", &FPopulationOptionSpawnData::MaxActiveActors)
        .def_readwrite("NumTotalActors", &FPopulationOptionSpawnData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionSpawnData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionSpawnData::NextSpawnTime)
  ;
}