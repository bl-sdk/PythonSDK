#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionRewardData()
{
    class_< FMissionRewardData >("FMissionRewardData", no_init)
        .def_readwrite("MissionDef", &FMissionRewardData::MissionDef)
  ;
}