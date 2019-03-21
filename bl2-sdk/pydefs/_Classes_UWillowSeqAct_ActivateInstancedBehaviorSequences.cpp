#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ActivateInstancedBehaviorSequences()
{
    class_< UWillowSeqAct_ActivateInstancedBehaviorSequences, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ActivateInstancedBehaviorSequences", no_init)
        .def_readwrite("Mission", &UWillowSeqAct_ActivateInstancedBehaviorSequences::Mission)
        .def_readwrite("MissionObjective", &UWillowSeqAct_ActivateInstancedBehaviorSequences::MissionObjective)
        .def_readwrite("SequenceName", &UWillowSeqAct_ActivateInstancedBehaviorSequences::SequenceName)
        .def("StaticClass", &UWillowSeqAct_ActivateInstancedBehaviorSequences::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}