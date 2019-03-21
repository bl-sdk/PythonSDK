#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorCondition(py::object m)
{
    py::class_< FBehaviorCondition >(m, "FBehaviorCondition")
        .def_readwrite("ConditionId", &FBehaviorCondition::ConditionId)
        .def_readwrite("Condition", &FBehaviorCondition::Condition)
        .def_readwrite("Behaviors", &FBehaviorCondition::Behaviors)
  ;
}