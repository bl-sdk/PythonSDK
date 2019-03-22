#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionObjectiveSetBranchingDefinition(py::module &m)
{
    py::class_< UMissionObjectiveSetBranchingDefinition,  UMissionObjectiveSetDefinition   >(m, "UMissionObjectiveSetBranchingDefinition")
        .def_readwrite("BranchedObjectiveDefinitions", &UMissionObjectiveSetBranchingDefinition::BranchedObjectiveDefinitions)
        .def("ContainsObjective", &UMissionObjectiveSetBranchingDefinition::ContainsObjective)
          ;
}