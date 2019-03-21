#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorEventData2()
{
    class_< FBehaviorEventData2 >("FBehaviorEventData2", no_init)
        .def_readwrite("UserData", &FBehaviorEventData2::UserData)
        .def_readwrite("OutputVariables", &FBehaviorEventData2::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorEventData2::OutputLinks)
  ;
}