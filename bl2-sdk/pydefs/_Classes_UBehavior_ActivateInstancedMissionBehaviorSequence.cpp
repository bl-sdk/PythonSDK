#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ActivateInstancedMissionBehaviorSequence()
{
    class_< UBehavior_ActivateInstancedMissionBehaviorSequence, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ActivateInstancedMissionBehaviorSequence", no_init)
        .def_readwrite("Mission", &UBehavior_ActivateInstancedMissionBehaviorSequence::Mission)
        .def_readwrite("MissionObjective", &UBehavior_ActivateInstancedMissionBehaviorSequence::MissionObjective)
        .def_readwrite("SequenceName", &UBehavior_ActivateInstancedMissionBehaviorSequence::SequenceName)
        .def("StaticClass", &UBehavior_ActivateInstancedMissionBehaviorSequence::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ActivateInstancedMissionBehaviorSequence::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}