#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorSequenceActionData2()
{
    class_< FBehaviorSequenceActionData2 >("FBehaviorSequenceActionData2", no_init)
        .def_readwrite("Behavior", &FBehaviorSequenceActionData2::Behavior)
        .def_readwrite("LinkedVariables", &FBehaviorSequenceActionData2::LinkedVariables)
        .def_readwrite("OutputLinks", &FBehaviorSequenceActionData2::OutputLinks)
  ;
}