#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APickupFactory()
{
    class_< APickupFactory, bases< ANavigationPoint >  , boost::noncopyable>("APickupFactory", no_init)
        .def_readwrite("InventoryType", &APickupFactory::InventoryType)
        .def_readwrite("RespawnEffectTime", &APickupFactory::RespawnEffectTime)
        .def_readwrite("MaxDesireability", &APickupFactory::MaxDesireability)
        .def_readwrite("PickupMesh", &APickupFactory::PickupMesh)
        .def_readwrite("ReplacementFactory", &APickupFactory::ReplacementFactory)
        .def_readwrite("OriginalFactory", &APickupFactory::OriginalFactory)
        .def("StaticClass", &APickupFactory::StaticClass, return_value_policy< reference_existing_object >())
        .def("DelayRespawn", &APickupFactory::DelayRespawn)
        .def("eventDestroyed", &APickupFactory::eventDestroyed)
        .def("SetPickupVisible", &APickupFactory::SetPickupVisible)
        .def("SetPickupHidden", &APickupFactory::SetPickupHidden)
        .def("RespawnEffect", &APickupFactory::RespawnEffect)
        .def("GetRespawnTime", &APickupFactory::GetRespawnTime)
        .def("RecheckValidTouch", &APickupFactory::RecheckValidTouch)
        .def("PickedUpBy", &APickupFactory::PickedUpBy)
        .def("GiveTo", &APickupFactory::GiveTo)
        .def("ReadyToPickup", &APickupFactory::ReadyToPickup)
        .def("SpawnCopyFor", &APickupFactory::SpawnCopyFor)
        .def("eventDetourWeight", &APickupFactory::eventDetourWeight)
        .def("StartSleeping", &APickupFactory::StartSleeping)
        .def("SetRespawn", &APickupFactory::SetRespawn)
        .def("CheckForErrors", &APickupFactory::CheckForErrors)
        .def("Reset", &APickupFactory::Reset)
        .def("SetPickupMesh", &APickupFactory::SetPickupMesh)
        .def("ShutDown", &APickupFactory::ShutDown)
        .def("eventSetInitialState", &APickupFactory::eventSetInitialState)
        .def("InitializePickup", &APickupFactory::InitializePickup)
        .def("eventPreBeginPlay", &APickupFactory::eventPreBeginPlay)
        .def("eventReplicatedEvent", &APickupFactory::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}