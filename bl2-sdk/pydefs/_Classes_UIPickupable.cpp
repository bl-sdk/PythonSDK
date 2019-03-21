#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIPickupable()
{
    class_< UIPickupable, bases< UInterface >  , boost::noncopyable>("UIPickupable", no_init)
        .def("StaticClass", &UIPickupable::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetInteractionIcon", &UIPickupable::SetInteractionIcon)
        .def("MarkAsDiscovered", &UIPickupable::MarkAsDiscovered)
        .def("IsDiscovered", &UIPickupable::IsDiscovered)
        .def("FailedPickup", &UIPickupable::FailedPickup)
        .def("DenyPickupAttempt", &UIPickupable::DenyPickupAttempt)
        .def("Pickupable_IsEnabled", &UIPickupable::Pickupable_IsEnabled)
        .def("GetPickupableInventoryDefinition", &UIPickupable::GetPickupableInventoryDefinition, return_value_policy< reference_existing_object >())
        .def("GetPickupableInventory", &UIPickupable::GetPickupableInventory, return_value_policy< reference_existing_object >())
        .def("GetPickupableMeshActor", &UIPickupable::GetPickupableMeshActor, return_value_policy< reference_existing_object >())
        .def("GiveTo", &UIPickupable::GiveTo)
        .staticmethod("StaticClass")
  ;
}