#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorCondition()
{
    py::class_< FBehaviorCondition >("FBehaviorCondition")
        .def_readwrite("ConditionId", &FBehaviorCondition::ConditionId)
        .def_readwrite("Condition", &FBehaviorCondition::Condition)
        .def_readwrite("Behaviors", &FBehaviorCondition::Behaviors)
  ;
}