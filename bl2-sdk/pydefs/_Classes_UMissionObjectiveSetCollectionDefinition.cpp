#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionObjectiveSetCollectionDefinition()
{
    class_< UMissionObjectiveSetCollectionDefinition, bases< UMissionObjectiveSetDefinition >  , boost::noncopyable>("UMissionObjectiveSetCollectionDefinition", no_init)
        .def_readwrite("ObjectiveSetDefinitions", &UMissionObjectiveSetCollectionDefinition::ObjectiveSetDefinitions)
        .def("StaticClass", &UMissionObjectiveSetCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ContainsObjective", &UMissionObjectiveSetCollectionDefinition::ContainsObjective)
        .staticmethod("StaticClass")
  ;
}