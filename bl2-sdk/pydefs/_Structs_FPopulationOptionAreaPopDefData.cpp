#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOptionAreaPopDefData()
{
    py::class_< FPopulationOptionAreaPopDefData >("FPopulationOptionAreaPopDefData")
        .def_readwrite("PopulationDef", &FPopulationOptionAreaPopDefData::PopulationDef)
        .def_readwrite("MaxTotalActorsFormula", &FPopulationOptionAreaPopDefData::MaxTotalActorsFormula)
        .def_readwrite("MaxTotalActors", &FPopulationOptionAreaPopDefData::MaxTotalActors)
        .def_readwrite("MaxActiveActors", &FPopulationOptionAreaPopDefData::MaxActiveActors)
        .def_readwrite("RespawnDelay", &FPopulationOptionAreaPopDefData::RespawnDelay)
        .def_readwrite("RespawnDelayAfterDeath", &FPopulationOptionAreaPopDefData::RespawnDelayAfterDeath)
  ;
}