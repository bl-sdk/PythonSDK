#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengeConditionDefinition(py::object m)
{
    py::class_< UChallengeConditionDefinition,  UGBXDefinition   >(m, "UChallengeConditionDefinition")
        .def_readwrite("Description", &UChallengeConditionDefinition::Description)
        .def_readwrite("StatId", &UChallengeConditionDefinition::StatId)
        .def_readwrite("TargetValue", &UChallengeConditionDefinition::TargetValue)
        .def("StaticClass", &UChallengeConditionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}