#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorCondition()
{
    class_< FBehaviorCondition >("FBehaviorCondition", no_init)
        .def_readwrite("ConditionId", &FBehaviorCondition::ConditionId)
        .def_readwrite("Condition", &FBehaviorCondition::Condition)
        .def_readwrite("Behaviors", &FBehaviorCondition::Behaviors)
  ;
}