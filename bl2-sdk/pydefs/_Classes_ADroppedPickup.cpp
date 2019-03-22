#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADroppedPickup(py::module &m)
{
    py::class_< ADroppedPickup,  AActor   >(m, "ADroppedPickup")
        .def_readwrite("VfTable_IIPickupable", &ADroppedPickup::VfTable_IIPickupable)
        .def_readwrite("Inventory", &ADroppedPickup::Inventory)
        .def_readwrite("PickupCache", &ADroppedPickup::PickupCache)
        .def_readwrite("Manufacturer", &ADroppedPickup::Manufacturer)
        .def_readwrite("MeshBounds", &ADroppedPickup::MeshBounds)
        .def_readwrite("Torque", &ADroppedPickup::Torque)
        .def("StaticClass", &ADroppedPickup::StaticClass, py::return_value_policy::reference)
        .def("GetTouchTraceLocation", &ADroppedPickup::GetTouchTraceLocation)
        .def("TouchPickupTrace", &ADroppedPickup::TouchPickupTrace)
        .def("GetPickupableMeshActor", &ADroppedPickup::GetPickupableMeshActor, py::return_value_policy::reference)
        .def("SetInteractionIcon", &ADroppedPickup::SetInteractionIcon)
        .def("MarkAsDiscovered", &ADroppedPickup::MarkAsDiscovered)
        .def("IsDiscovered", &ADroppedPickup::IsDiscovered)
        .def("DenyPickupAttempt", &ADroppedPickup::DenyPickupAttempt)
        .def("Pickupable_IsEnabled", &ADroppedPickup::Pickupable_IsEnabled)
        .def("GetPickupableInventoryDefinition", &ADroppedPickup::GetPickupableInventoryDefinition, py::return_value_policy::reference)
        .def("GetPickupableInventory", &ADroppedPickup::GetPickupableInventory, py::return_value_policy::reference)
        .def("IsPickupableInventoryAutomaticallyPickedUp", &ADroppedPickup::IsPickupableInventoryAutomaticallyPickedUp)
        .def("RecheckValidTouch", &ADroppedPickup::RecheckValidTouch)
        .def("FailedPickup", &ADroppedPickup::FailedPickup)
        .def("PickedUpBy", &ADroppedPickup::PickedUpBy)
        .def("GiveTo", &ADroppedPickup::GiveTo)
        .def("eventLanded", &ADroppedPickup::eventLanded)
        .def("DetourWeight", &ADroppedPickup::DetourWeight)
        .def("eventEncroachedBy", &ADroppedPickup::eventEncroachedBy)
        .def("eventSetPickupParticles", &ADroppedPickup::eventSetPickupParticles)
        .def("eventSetPickupMesh", &ADroppedPickup::eventSetPickupMesh)
        .def("InitializeFromInventory", &ADroppedPickup::InitializeFromInventory)
        .def("Reset", &ADroppedPickup::Reset)
        .def("eventReplicatedEvent", &ADroppedPickup::eventReplicatedEvent)
        .def("eventDestroyed", &ADroppedPickup::eventDestroyed)
        .def("RemoveFromNavigation", &ADroppedPickup::RemoveFromNavigation)
        .def("AddToNavigation", &ADroppedPickup::AddToNavigation)
          ;
}