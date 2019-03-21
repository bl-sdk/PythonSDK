#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDLCMissionData()
{
    class_< FDLCMissionData >("FDLCMissionData", no_init)
        .def_readwrite("MinMissionNumber", &FDLCMissionData::MinMissionNumber)
        .def_readwrite("MaxMissionNumber", &FDLCMissionData::MaxMissionNumber)
        .def_readwrite("MissionNameLocKey", &FDLCMissionData::MissionNameLocKey)
  ;
}