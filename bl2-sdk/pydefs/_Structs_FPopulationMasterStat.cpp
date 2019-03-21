#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationMasterStat()
{
    class_< FPopulationMasterStat >("FPopulationMasterStat", no_init)
        .def_readwrite("StatName", &FPopulationMasterStat::StatName)
        .def_readwrite("StatTime", &FPopulationMasterStat::StatTime)
        .def_readwrite("StatMaxTime", &FPopulationMasterStat::StatMaxTime)
        .def_readwrite("StatIterations", &FPopulationMasterStat::StatIterations)
        .def_readwrite("IterationStartTime", &FPopulationMasterStat::IterationStartTime)
  ;
}