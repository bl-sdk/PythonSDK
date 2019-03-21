#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionObserversData()
{
    class_< FMissionObserversData >("FMissionObserversData", no_init)
        .def_readwrite("Mission", &FMissionObserversData::Mission)
        .def_readwrite("Observers", &FMissionObserversData::Observers)
  ;
}