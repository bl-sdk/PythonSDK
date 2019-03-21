#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorEventData()
{
    class_< FBehaviorEventData >("FBehaviorEventData", no_init)
        .def_readwrite("UserData", &FBehaviorEventData::UserData)
        .def_readwrite("OutputVariables", &FBehaviorEventData::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorEventData::OutputLinks)
  ;
}