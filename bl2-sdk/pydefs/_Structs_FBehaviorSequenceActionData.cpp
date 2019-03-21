#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorSequenceActionData()
{
    class_< FBehaviorSequenceActionData >("FBehaviorSequenceActionData", no_init)
        .def_readwrite("Behavior", &FBehaviorSequenceActionData::Behavior)
        .def_readwrite("ContextVariables", &FBehaviorSequenceActionData::ContextVariables)
        .def_readwrite("LinkedVariables", &FBehaviorSequenceActionData::LinkedVariables)
        .def_readwrite("OutputVariables", &FBehaviorSequenceActionData::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorSequenceActionData::OutputLinks)
  ;
}