#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowMissionItem()
{
    class_< AWillowMissionItem, bases< AWillowItem >  , boost::noncopyable>("AWillowMissionItem", no_init)
        .def_readwrite("PickupFailsafe", &AWillowMissionItem::PickupFailsafe)
        .def_readwrite("MissionItemString", &AWillowMissionItem::MissionItemString)
        .def_readwrite("VfTable_IIMissionObjective", &AWillowUsableItem::VfTable_IIMissionObjective)
        .def_readwrite("ObjectiveBit", &AWillowUsableItem::ObjectiveBit)
        .def("StaticClass", &AWillowMissionItem::StaticClass, return_value_policy< reference_existing_object >())
        .def("FormatFunStatsText", &AWillowMissionItem::FormatFunStatsText)
        .def("GenerateFunStatsText", &AWillowMissionItem::GenerateFunStatsText)
        .def("GetItemCardTopSectionString", &AWillowMissionItem::GetItemCardTopSectionString)
        .def("PickupAssociated", &AWillowMissionItem::PickupAssociated)
        .def("MissionDenyPickup", &AWillowMissionItem::MissionDenyPickup)
        .def("HandleOnUsed", &AWillowMissionItem::HandleOnUsed)
        .def("CanBeUsedBy", &AWillowMissionItem::CanBeUsedBy)
        .def("ClientInitializeFromItemDefinition", &AWillowMissionItem::ClientInitializeFromItemDefinition)
        .def("ValidateDefinitions", &AWillowMissionItem::ValidateDefinitions)
        .def("GetAttributePresentationOverride", &AWillowUsableItem::GetAttributePresentationOverride, return_value_policy< reference_existing_object >())
        .def("ConsumeItem", &AWillowUsableItem::ConsumeItem)
        .def("TryConsume", &AWillowUsableItem::TryConsume)
        .def("Consume", &AWillowUsableItem::Consume)
        .def("Readied", &AWillowUsableItem::Readied)
        .def("GetOwningPlayerController", &AWillowUsableItem::GetOwningPlayerController, return_value_policy< reference_existing_object >())
        .def("GivenTo", &AWillowUsableItem::GivenTo)
        .def("CanBeReadiedOnPickup", &AWillowUsableItem::CanBeReadiedOnPickup)
        .def("HandlePickupQuery", &AWillowUsableItem::HandlePickupQuery)
        .def("eventIsItemAutoUsedBy", &AWillowUsableItem::eventIsItemAutoUsedBy)
        .def("eventGetObjectiveBit", &AWillowUsableItem::eventGetObjectiveBit)
        .def("ValidateDefinition", &AWillowUsableItem::ValidateDefinition)
        .def("OnUsed", &AWillowUsableItem::OnUsed)
        .staticmethod("StaticClass")
  ;
}