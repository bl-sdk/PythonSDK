#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowUsableItem()
{
    class_< AWillowUsableItem, bases< AWillowItem >  , boost::noncopyable>("AWillowUsableItem", no_init)
        .def_readwrite("VfTable_IIMissionObjective", &AWillowUsableItem::VfTable_IIMissionObjective)
        .def_readwrite("ObjectiveBit", &AWillowUsableItem::ObjectiveBit)
        .def("StaticClass", &AWillowUsableItem::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributePresentationOverride", &AWillowUsableItem::GetAttributePresentationOverride, return_value_policy< reference_existing_object >())
        .def("ConsumeItem", &AWillowUsableItem::ConsumeItem)
        .def("TryConsume", &AWillowUsableItem::TryConsume)
        .def("Consume", &AWillowUsableItem::Consume)
        .def("Readied", &AWillowUsableItem::Readied)
        .def("GetOwningPlayerController", &AWillowUsableItem::GetOwningPlayerController, return_value_policy< reference_existing_object >())
        .def("HandleOnUsed", &AWillowUsableItem::HandleOnUsed)
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