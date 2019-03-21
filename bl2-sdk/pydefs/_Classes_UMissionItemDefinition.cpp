#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionItemDefinition()
{
    class_< UMissionItemDefinition, bases< UItemDefinition >  , boost::noncopyable>("UMissionItemDefinition", no_init)
        .def_readwrite("AssociatedMissionObjective", &UMissionItemDefinition::AssociatedMissionObjective)
        .def_readwrite("MissionDirective", &UMissionItemDefinition::MissionDirective)
        .def_readwrite("DirectiveMovieDefinition", &UMissionItemDefinition::DirectiveMovieDefinition)
        .def_readwrite("UsedStatId", &UUsableItemDefinition::UsedStatId)
        .def("StaticClass", &UMissionItemDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanPickupInBulk", &UMissionItemDefinition::CanPickupInBulk)
        .def("ShouldPlayerAutomaticallyPickup", &UMissionItemDefinition::ShouldPlayerAutomaticallyPickup)
        .def("OnUsed", &UUsableItemDefinition::OnUsed)
        .staticmethod("StaticClass")
  ;
}