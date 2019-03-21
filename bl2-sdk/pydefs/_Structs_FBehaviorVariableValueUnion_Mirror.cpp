#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorVariableValueUnion_Mirror()
{
    class_< FBehaviorVariableValueUnion_Mirror >("FBehaviorVariableValueUnion_Mirror", no_init)
        .def_readwrite("Data", &FBehaviorVariableValueUnion_Mirror::Data)
  ;
}