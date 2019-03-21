#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionObjectiveSetBranchingDefinition()
{
    py::class_< UMissionObjectiveSetBranchingDefinition,  UMissionObjectiveSetDefinition   >("UMissionObjectiveSetBranchingDefinition")
        .def_readwrite("BranchedObjectiveDefinitions", &UMissionObjectiveSetBranchingDefinition::BranchedObjectiveDefinitions)
        .def("StaticClass", &UMissionObjectiveSetBranchingDefinition::StaticClass, py::return_value_policy::reference)
        .def("ContainsObjective", &UMissionObjectiveSetBranchingDefinition::ContainsObjective)
        .staticmethod("StaticClass")
  ;
}