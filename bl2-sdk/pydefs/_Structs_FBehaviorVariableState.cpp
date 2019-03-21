#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorVariableState()
{
    class_< FBehaviorVariableState >("FBehaviorVariableState", no_init)
        .def_readwrite("Name", &FBehaviorVariableState::Name)
        .def_readwrite("Type", &FBehaviorVariableState::Type)
        .def_readwrite("Value", &FBehaviorVariableState::Value)
  ;
}