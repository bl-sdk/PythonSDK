#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOptionDenSpawnData(py::object m)
{
    py::class_< FPopulationOptionDenSpawnData >(m, "FPopulationOptionDenSpawnData")
        .def_readwrite("PopulationDefName", &FPopulationOptionDenSpawnData::PopulationDefName)
        .def_readwrite("MaxActiveActors", &FPopulationOptionDenSpawnData::MaxActiveActors)
        .def_readwrite("NumTotalActors", &FPopulationOptionDenSpawnData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionDenSpawnData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionDenSpawnData::NextSpawnTime)
        .def_readwrite("NumTotalExternalActors", &FPopulationOptionDenSpawnData::NumTotalExternalActors)
        .def_readwrite("NumActiveExternalActors", &FPopulationOptionDenSpawnData::NumActiveExternalActors)
  ;
}