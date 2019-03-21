#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionDirectorData()
{
    class_< FMissionDirectorData >("FMissionDirectorData", no_init)
        .def_readwrite("MissionDefinition", &FMissionDirectorData::MissionDefinition)
        .def_readwrite("BranchEnding", &FMissionDirectorData::BranchEnding)
  ;
}