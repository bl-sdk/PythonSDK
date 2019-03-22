#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationAreaOptionSpawnData(py::module &m)
{
    py::class_< FPopulationAreaOptionSpawnData >(m, "FPopulationAreaOptionSpawnData")
        .def_readwrite("Data", &FPopulationAreaOptionSpawnData::Data)
  ;
}