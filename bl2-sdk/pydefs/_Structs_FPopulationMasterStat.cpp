#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationMasterStat()
{
    py::class_< FPopulationMasterStat >("FPopulationMasterStat")
        .def_readwrite("StatName", &FPopulationMasterStat::StatName)
        .def_readwrite("StatTime", &FPopulationMasterStat::StatTime)
        .def_readwrite("StatMaxTime", &FPopulationMasterStat::StatMaxTime)
        .def_readwrite("StatIterations", &FPopulationMasterStat::StatIterations)
        .def_readwrite("IterationStartTime", &FPopulationMasterStat::IterationStartTime)
  ;
}