#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorContextData()
{
    class_< FBehaviorContextData >("FBehaviorContextData", no_init)
        .def_readwrite("InstancedDataContextName", &FBehaviorContextData::InstancedDataContextName)
        .def_readwrite("ContextObject", &FBehaviorContextData::ContextObject)
        .def_readwrite("BehaviorContext", &FBehaviorContextData::BehaviorContext)
        .def_readwrite("bSupportsDefaultOutputLink", &FBehaviorContextData::bSupportsDefaultOutputLink)
  ;
}