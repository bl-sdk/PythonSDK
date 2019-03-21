#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationOptionAreaPopDefData()
{
    class_< FPopulationOptionAreaPopDefData >("FPopulationOptionAreaPopDefData", no_init)
        .def_readwrite("PopulationDef", &FPopulationOptionAreaPopDefData::PopulationDef)
        .def_readwrite("MaxTotalActorsFormula", &FPopulationOptionAreaPopDefData::MaxTotalActorsFormula)
        .def_readwrite("MaxTotalActors", &FPopulationOptionAreaPopDefData::MaxTotalActors)
        .def_readwrite("MaxActiveActors", &FPopulationOptionAreaPopDefData::MaxActiveActors)
        .def_readwrite("RespawnDelay", &FPopulationOptionAreaPopDefData::RespawnDelay)
        .def_readwrite("RespawnDelayAfterDeath", &FPopulationOptionAreaPopDefData::RespawnDelayAfterDeath)
  ;
}