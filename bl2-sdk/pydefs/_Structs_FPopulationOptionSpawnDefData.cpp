#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOptionSpawnDefData()
{
    py::class_< FPopulationOptionSpawnDefData >("FPopulationOptionSpawnDefData")
        .def_readwrite("PopulationDefName", &FPopulationOptionSpawnDefData::PopulationDefName)
        .def_readwrite("NumTotalActors", &FPopulationOptionSpawnDefData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionSpawnDefData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionSpawnDefData::NextSpawnTime)
  ;
}