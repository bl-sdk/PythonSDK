#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKActor(py::module &m)
{
    py::class_< AKActor,  ADynamicSMActor   >(m, "AKActor")
        .def_readwrite("ImpactEffectComponent", &AKActor::ImpactEffectComponent)
        .def_readwrite("ImpactSoundComponent", &AKActor::ImpactSoundComponent)
        .def_readwrite("ImpactSoundComponent2", &AKActor::ImpactSoundComponent2)
        .def_readwrite("LastImpactTime", &AKActor::LastImpactTime)
        .def_readwrite("ImpactEffectInfo", &AKActor::ImpactEffectInfo)
        .def_readwrite("SlideEffectComponent", &AKActor::SlideEffectComponent)
        .def_readwrite("SlideSoundComponent", &AKActor::SlideSoundComponent)
        .def_readwrite("LastSlideTime", &AKActor::LastSlideTime)
        .def_readwrite("SlideEffectInfo", &AKActor::SlideEffectInfo)
        .def_readwrite("StayUprightTorqueFactor", &AKActor::StayUprightTorqueFactor)
        .def_readwrite("StayUprightMaxTorque", &AKActor::StayUprightMaxTorque)
        .def_readwrite("MaxPhysicsVelocity", &AKActor::MaxPhysicsVelocity)
        .def_readwrite("NetRelevantDistanceSquared", &AKActor::NetRelevantDistanceSquared)
        .def_readwrite("RBState", &AKActor::RBState)
        .def_readwrite("AngErrorAccumulator", &AKActor::AngErrorAccumulator)
        .def_readwrite("ReplicatedDrawScale3D", &AKActor::ReplicatedDrawScale3D)
        .def_readwrite("InitialLocation", &AKActor::InitialLocation)
        .def_readwrite("InitialRotation", &AKActor::InitialRotation)
        .def("Reset", &AKActor::Reset)
        .def("OnTeleport", &AKActor::OnTeleport)
        .def("OnToggle", &AKActor::OnToggle)
        .def("TakeRadiusDamage", &AKActor::TakeRadiusDamage)
        .def("eventTakeDamage", &AKActor::eventTakeDamage)
        .def("eventApplyImpulse", &AKActor::eventApplyImpulse)
        .def("eventReplicatedEvent", &AKActor::eventReplicatedEvent)
        .def("eventSpawnedByKismet", &AKActor::eventSpawnedByKismet)
        .def("SetPhysicalCollisionProperties", &AKActor::SetPhysicalCollisionProperties)
        .def("eventDestroyed", &AKActor::eventDestroyed)
        .def("eventFellOutOfWorld", &AKActor::eventFellOutOfWorld)
        .def("eventPostBeginPlay", &AKActor::eventPostBeginPlay)
        .def("ResolveRBState", &AKActor::ResolveRBState)
        .def("GetKActorPhysMaterial", &AKActor::GetKActorPhysMaterial, py::return_value_policy::reference)
          ;
}