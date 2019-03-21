#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimedMissionData()
{
    class_< FTimedMissionData >("FTimedMissionData", no_init)
        .def_readwrite("Mission", &FTimedMissionData::Mission)
        .def_readwrite("SecondsLeft", &FTimedMissionData::SecondsLeft)
  ;
}