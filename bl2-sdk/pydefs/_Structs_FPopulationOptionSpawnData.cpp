#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOptionSpawnData(py::object m)
{
    py::class_< FPopulationOptionSpawnData >(m, "FPopulationOptionSpawnData")
        .def_readwrite("PopulationDefName", &FPopulationOptionSpawnData::PopulationDefName)
        .def_readwrite("MaxActiveActors", &FPopulationOptionSpawnData::MaxActiveActors)
        .def_readwrite("NumTotalActors", &FPopulationOptionSpawnData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionSpawnData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionSpawnData::NextSpawnTime)
  ;
}