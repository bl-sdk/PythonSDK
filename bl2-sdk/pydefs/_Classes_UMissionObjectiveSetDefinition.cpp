#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionObjectiveSetDefinition(py::module &m)
{
    py::class_< UMissionObjectiveSetDefinition,  UGBXDefinition   >(m, "UMissionObjectiveSetDefinition")
        .def_readwrite("ObjectiveDefinitions", &UMissionObjectiveSetDefinition::ObjectiveDefinitions)
        .def_readwrite("NextSet", &UMissionObjectiveSetDefinition::NextSet)
        .def_readwrite("StationOverride", &UMissionObjectiveSetDefinition::StationOverride)
        .def_readwrite("MissionSummaryOverride", &UMissionObjectiveSetDefinition::MissionSummaryOverride)
        .def_readwrite("MissionDescriptionOverride", &UMissionObjectiveSetDefinition::MissionDescriptionOverride)
        .def("StaticClass", &UMissionObjectiveSetDefinition::StaticClass, py::return_value_policy::reference)
        .def("ContainsOptionalObjective", &UMissionObjectiveSetDefinition::ContainsOptionalObjective)
        .def("ContainsObjective", &UMissionObjectiveSetDefinition::ContainsObjective)
          ;
}