#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDefendMissionData()
{
    class_< FDefendMissionData >("FDefendMissionData", no_init)
        .def_readwrite("Objective", &FDefendMissionData::Objective)
        .def_readwrite("Target", &FDefendMissionData::Target)
        .def_readonly("UnknownData00", &FDefendMissionData::UnknownData00)
  ;
}