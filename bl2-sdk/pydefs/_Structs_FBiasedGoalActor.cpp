#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBiasedGoalActor()
{
    class_< FBiasedGoalActor >("FBiasedGoalActor", no_init)
        .def_readwrite("Goal", &FBiasedGoalActor::Goal)
        .def_readwrite("ExtraCost", &FBiasedGoalActor::ExtraCost)
  ;
}