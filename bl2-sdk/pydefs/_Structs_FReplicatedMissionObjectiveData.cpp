#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedMissionObjectiveData()
{
    class_< FReplicatedMissionObjectiveData >("FReplicatedMissionObjectiveData", no_init)
        .def_readwrite("Objective", &FReplicatedMissionObjectiveData::Objective)
        .def_readwrite("ObjectiveBit", &FReplicatedMissionObjectiveData::ObjectiveBit)
  ;
}