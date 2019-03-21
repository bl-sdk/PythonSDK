#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedMissionDirectiveData()
{
    class_< FReplicatedMissionDirectiveData >("FReplicatedMissionDirectiveData", no_init)
        .def_readwrite("MissionDirector", &FReplicatedMissionDirectiveData::MissionDirector)
        .def_readonly("UnknownData00", &FReplicatedMissionDirectiveData::UnknownData00)
        .def_readwrite("MissionDirective", &FReplicatedMissionDirectiveData::MissionDirective)
  ;
}