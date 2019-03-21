#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInventory()
{
    py::class_< AInventory,  AActor   >("AInventory")
        .def_readwrite("Inventory", &AInventory::Inventory)
        .def_readwrite("InvManager", &AInventory::InvManager)
        .def_readwrite("ItemName", &AInventory::ItemName)
        .def_readwrite("RespawnTime", &AInventory::RespawnTime)
        .def_readwrite("MaxDesireability", &AInventory::MaxDesireability)
        .def_readwrite("PickupMessage", &AInventory::PickupMessage)
        .def_readwrite("MessageClass", &AInventory::MessageClass)
        .def_readwrite("PickupSound", &AInventory::PickupSound)
        .def_readwrite("DroppedPickupClass", &AInventory::DroppedPickupClass)
        .def_readwrite("DroppedPickupMesh", &AInventory::DroppedPickupMesh)
        .def_readwrite("PickupFactoryMesh", &AInventory::PickupFactoryMesh)
        .def("StaticClass", &AInventory::StaticClass, py::return_value_policy::reference)
        .def("Unreadied", &AInventory::Unreadied)
        .def("Readied", &AInventory::Readied)
        .def("Unready", &AInventory::Unready)
        .def("Ready", &AInventory::Ready)
        .def("eventCanBeUsedBy", &AInventory::eventCanBeUsedBy)
        .def("GetLocalString", &AInventory::GetLocalString)
        .def("DropFrom", &AInventory::DropFrom, py::return_value_policy::reference)
        .def("DenyPickupQuery", &AInventory::DenyPickupQuery)
        .def("ItemRemovedFromInvManager", &AInventory::ItemRemovedFromInvManager)
        .def("ClientGivenTo", &AInventory::ClientGivenTo)
        .def("GivenTo", &AInventory::GivenTo)
        .def("PlayPickupSound", &AInventory::PlayPickupSound)
        .def("AnnouncePickup", &AInventory::AnnouncePickup)
        .def("eventGiveTo", &AInventory::eventGiveTo)
        .def("DetourWeight", &AInventory::DetourWeight)
        .def("BotDesireability", &AInventory::BotDesireability)
        .def("eventDestroyed", &AInventory::eventDestroyed)
        .def("GetHumanReadableName", &AInventory::GetHumanReadableName)
        .def("eventReplicatedEvent", &AInventory::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}