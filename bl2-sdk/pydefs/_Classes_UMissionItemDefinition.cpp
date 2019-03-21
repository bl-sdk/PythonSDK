#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionItemDefinition()
{
    py::class_< UMissionItemDefinition,  UItemDefinition   >("UMissionItemDefinition")
        .def_readwrite("AssociatedMissionObjective", &UMissionItemDefinition::AssociatedMissionObjective)
        .def_readwrite("MissionDirective", &UMissionItemDefinition::MissionDirective)
        .def_readwrite("DirectiveMovieDefinition", &UMissionItemDefinition::DirectiveMovieDefinition)
        .def_readwrite("UsedStatId", &UUsableItemDefinition::UsedStatId)
        .def("StaticClass", &UMissionItemDefinition::StaticClass, py::return_value_policy::reference)
        .def("CanPickupInBulk", &UMissionItemDefinition::CanPickupInBulk)
        .def("ShouldPlayerAutomaticallyPickup", &UMissionItemDefinition::ShouldPlayerAutomaticallyPickup)
        .def("OnUsed", &UUsableItemDefinition::OnUsed)
        .staticmethod("StaticClass")
  ;
}