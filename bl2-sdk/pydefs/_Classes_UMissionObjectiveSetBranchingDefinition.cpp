#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionObjectiveSetBranchingDefinition()
{
    class_< UMissionObjectiveSetBranchingDefinition, bases< UMissionObjectiveSetDefinition >  , boost::noncopyable>("UMissionObjectiveSetBranchingDefinition", no_init)
        .def_readwrite("BranchedObjectiveDefinitions", &UMissionObjectiveSetBranchingDefinition::BranchedObjectiveDefinitions)
        .def("StaticClass", &UMissionObjectiveSetBranchingDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ContainsObjective", &UMissionObjectiveSetBranchingDefinition::ContainsObjective)
        .staticmethod("StaticClass")
  ;
}