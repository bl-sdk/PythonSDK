#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedMissionStatusData()
{
    class_< FReplicatedMissionStatusData >("FReplicatedMissionStatusData", no_init)
        .def_readwrite("Mission", &FReplicatedMissionStatusData::Mission)
        .def_readwrite("Status", &FReplicatedMissionStatusData::Status)
  ;
}