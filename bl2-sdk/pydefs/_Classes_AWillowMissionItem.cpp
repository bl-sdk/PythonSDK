#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowMissionItem(py::object m)
{
    py::class_< AWillowMissionItem,  AWillowItem   >(m, "AWillowMissionItem")
        .def_readwrite("PickupFailsafe", &AWillowMissionItem::PickupFailsafe)
        .def_readwrite("MissionItemString", &AWillowMissionItem::MissionItemString)
        .def_readwrite("VfTable_IIMissionObjective", &AWillowUsableItem::VfTable_IIMissionObjective)
        .def_readwrite("ObjectiveBit", &AWillowUsableItem::ObjectiveBit)
        .def("StaticClass", &AWillowMissionItem::StaticClass, py::return_value_policy::reference)
        .def("FormatFunStatsText", &AWillowMissionItem::FormatFunStatsText)
        .def("GenerateFunStatsText", &AWillowMissionItem::GenerateFunStatsText)
        .def("GetItemCardTopSectionString", &AWillowMissionItem::GetItemCardTopSectionString)
        .def("PickupAssociated", &AWillowMissionItem::PickupAssociated)
        .def("MissionDenyPickup", &AWillowMissionItem::MissionDenyPickup)
        .def("HandleOnUsed", &AWillowMissionItem::HandleOnUsed)
        .def("CanBeUsedBy", &AWillowMissionItem::CanBeUsedBy)
        .def("ClientInitializeFromItemDefinition", &AWillowMissionItem::ClientInitializeFromItemDefinition)
        .def("ValidateDefinitions", &AWillowMissionItem::ValidateDefinitions)
        .def("GetAttributePresentationOverride", &AWillowUsableItem::GetAttributePresentationOverride, py::return_value_policy::reference)
        .def("ConsumeItem", &AWillowUsableItem::ConsumeItem)
        .def("TryConsume", &AWillowUsableItem::TryConsume)
        .def("Consume", &AWillowUsableItem::Consume)
        .def("Readied", &AWillowUsableItem::Readied)
        .def("GetOwningPlayerController", &AWillowUsableItem::GetOwningPlayerController, py::return_value_policy::reference)
        .def("GivenTo", &AWillowUsableItem::GivenTo)
        .def("CanBeReadiedOnPickup", &AWillowUsableItem::CanBeReadiedOnPickup)
        .def("HandlePickupQuery", &AWillowUsableItem::HandlePickupQuery)
        .def("eventIsItemAutoUsedBy", &AWillowUsableItem::eventIsItemAutoUsedBy)
        .def("eventGetObjectiveBit", &AWillowUsableItem::eventGetObjectiveBit)
        .def("ValidateDefinition", &AWillowUsableItem::ValidateDefinition)
        .def("OnUsed", &AWillowUsableItem::OnUsed)
          ;
}