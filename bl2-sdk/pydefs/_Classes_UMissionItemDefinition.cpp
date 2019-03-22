#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionItemDefinition(py::module &m)
{
    py::class_< UMissionItemDefinition,  UItemDefinition   >(m, "UMissionItemDefinition")
        .def_readwrite("AssociatedMissionObjective", &UMissionItemDefinition::AssociatedMissionObjective)
        .def_readwrite("MissionDirective", &UMissionItemDefinition::MissionDirective)
        .def_readwrite("DirectiveMovieDefinition", &UMissionItemDefinition::DirectiveMovieDefinition)
        .def_readwrite("UsedStatId", &UUsableItemDefinition::UsedStatId)
        .def("CanPickupInBulk", &UMissionItemDefinition::CanPickupInBulk)
        .def("ShouldPlayerAutomaticallyPickup", &UMissionItemDefinition::ShouldPlayerAutomaticallyPickup)
        .def("OnUsed", &UUsableItemDefinition::OnUsed)
          ;
}