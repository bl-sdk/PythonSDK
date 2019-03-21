#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorExecutionRecord()
{
    class_< FBehaviorExecutionRecord >("FBehaviorExecutionRecord", no_init)
        .def_readwrite("OwningProcessID", &FBehaviorExecutionRecord::OwningProcessID)
        .def_readwrite("ProvidersIndex", &FBehaviorExecutionRecord::ProvidersIndex)
        .def_readwrite("SequencesDataIndex", &FBehaviorExecutionRecord::SequencesDataIndex)
        .def_readwrite("BehaviorNumber", &FBehaviorExecutionRecord::BehaviorNumber)
        .def_readwrite("BehaviorName", &FBehaviorExecutionRecord::BehaviorName)
        .def_readwrite("TimeOfExecution", &FBehaviorExecutionRecord::TimeOfExecution)
  ;
}