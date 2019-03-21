#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedMissionFilterData()
{
    class_< FReplicatedMissionFilterData >("FReplicatedMissionFilterData", no_init)
        .def_readwrite("Mission", &FReplicatedMissionFilterData::Mission)
  ;
}