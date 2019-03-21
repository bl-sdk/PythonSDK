#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationOptionDenSpawnData()
{
    class_< FPopulationOptionDenSpawnData >("FPopulationOptionDenSpawnData", no_init)
        .def_readwrite("PopulationDefName", &FPopulationOptionDenSpawnData::PopulationDefName)
        .def_readwrite("MaxActiveActors", &FPopulationOptionDenSpawnData::MaxActiveActors)
        .def_readwrite("NumTotalActors", &FPopulationOptionDenSpawnData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionDenSpawnData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionDenSpawnData::NextSpawnTime)
        .def_readwrite("NumTotalExternalActors", &FPopulationOptionDenSpawnData::NumTotalExternalActors)
        .def_readwrite("NumActiveExternalActors", &FPopulationOptionDenSpawnData::NumActiveExternalActors)
  ;
}