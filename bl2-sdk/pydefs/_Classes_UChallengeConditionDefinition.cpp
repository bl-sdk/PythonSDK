#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengeConditionDefinition(py::module &m)
{
    py::class_< UChallengeConditionDefinition,  UGBXDefinition   >(m, "UChallengeConditionDefinition")
		.def_static("StaticClass", &UChallengeConditionDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Description", &UChallengeConditionDefinition::Description)
        .def_readwrite("StatId", &UChallengeConditionDefinition::StatId)
        .def_readwrite("TargetValue", &UChallengeConditionDefinition::TargetValue)
          ;
}