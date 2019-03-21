#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationAreaOptionSpawnData()
{
    py::class_< FPopulationAreaOptionSpawnData >("FPopulationAreaOptionSpawnData")
        .def_readwrite("Data", &FPopulationAreaOptionSpawnData::Data)
  ;
}