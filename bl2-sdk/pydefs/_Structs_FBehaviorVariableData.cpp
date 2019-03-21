#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorVariableData()
{
    class_< FBehaviorVariableData >("FBehaviorVariableData", no_init)
        .def_readwrite("Name", &FBehaviorVariableData::Name)
        .def_readwrite("Type", &FBehaviorVariableData::Type)
        .def_readwrite("Value", &FBehaviorVariableData::Value)
  ;
}