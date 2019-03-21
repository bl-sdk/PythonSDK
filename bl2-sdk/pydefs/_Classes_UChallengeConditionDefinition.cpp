#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengeConditionDefinition()
{
    py::class_< UChallengeConditionDefinition,  UGBXDefinition   >("UChallengeConditionDefinition")
        .def_readwrite("Description", &UChallengeConditionDefinition::Description)
        .def_readwrite("StatId", &UChallengeConditionDefinition::StatId)
        .def_readwrite("TargetValue", &UChallengeConditionDefinition::TargetValue)
        .def("StaticClass", &UChallengeConditionDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}