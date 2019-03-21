#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionObjectiveSetDefinition()
{
    class_< UMissionObjectiveSetDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UMissionObjectiveSetDefinition", no_init)
        .def_readwrite("ObjectiveDefinitions", &UMissionObjectiveSetDefinition::ObjectiveDefinitions)
        .def_readwrite("NextSet", &UMissionObjectiveSetDefinition::NextSet)
        .def_readwrite("StationOverride", &UMissionObjectiveSetDefinition::StationOverride)
        .def_readwrite("MissionSummaryOverride", &UMissionObjectiveSetDefinition::MissionSummaryOverride)
        .def_readwrite("MissionDescriptionOverride", &UMissionObjectiveSetDefinition::MissionDescriptionOverride)
        .def("StaticClass", &UMissionObjectiveSetDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ContainsOptionalObjective", &UMissionObjectiveSetDefinition::ContainsOptionalObjective)
        .def("ContainsObjective", &UMissionObjectiveSetDefinition::ContainsObjective)
        .staticmethod("StaticClass")
  ;
}