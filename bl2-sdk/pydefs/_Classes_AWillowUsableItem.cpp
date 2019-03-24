#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowUsableItem(py::module &m)
{
    py::class_< AWillowUsableItem,  AWillowItem   >(m, "AWillowUsableItem")
		.def_static("StaticClass", &AWillowUsableItem::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIMissionObjective", &AWillowUsableItem::VfTable_IIMissionObjective)
        .def_readwrite("ObjectiveBit", &AWillowUsableItem::ObjectiveBit)
        .def("GetAttributePresentationOverride", &AWillowUsableItem::GetAttributePresentationOverride, py::return_value_policy::reference)
        .def("ConsumeItem", &AWillowUsableItem::ConsumeItem)
        .def("TryConsume", &AWillowUsableItem::TryConsume)
        .def("Consume", &AWillowUsableItem::Consume)
        .def("Readied", &AWillowUsableItem::Readied)
        .def("GetOwningPlayerController", &AWillowUsableItem::GetOwningPlayerController, py::return_value_policy::reference)
        .def("HandleOnUsed", &AWillowUsableItem::HandleOnUsed)
        .def("GivenTo", &AWillowUsableItem::GivenTo)
        .def("CanBeReadiedOnPickup", &AWillowUsableItem::CanBeReadiedOnPickup)
        .def("HandlePickupQuery", &AWillowUsableItem::HandlePickupQuery)
        .def("eventIsItemAutoUsedBy", &AWillowUsableItem::eventIsItemAutoUsedBy)
        .def("eventGetObjectiveBit", &AWillowUsableItem::eventGetObjectiveBit)
        .def("ValidateDefinition", &AWillowUsableItem::ValidateDefinition)
        .def("OnUsed", &AWillowUsableItem::OnUsed)
          ;
}