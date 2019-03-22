#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADeployableTurretActor(py::module &m)
{
    py::class_< ADeployableTurretActor,  AWillowAIPawn   >(m, "ADeployableTurretActor")
        .def_readwrite("BounceImpact", &ADeployableTurretActor::BounceImpact)
        .def_readwrite("AtRestSpeedThreshold", &ADeployableTurretActor::AtRestSpeedThreshold)
        .def_readwrite("TurretEffects", &ADeployableTurretActor::TurretEffects)
        .def_readwrite("TurretDamagePct", &ADeployableTurretActor::TurretDamagePct)
        .def_readwrite("DamageEffectTriggers", &ADeployableTurretActor::DamageEffectTriggers)
        .def("StaticClass", &ADeployableTurretActor::StaticClass, py::return_value_policy::reference)
        .def("PostSpawnCheckForPlayerOverlap", &ADeployableTurretActor::PostSpawnCheckForPlayerOverlap)
        .def("PostInitBodyComposition", &ADeployableTurretActor::PostInitBodyComposition)
        .def("FindBase", &ADeployableTurretActor::FindBase)
        .def("CheckTurretDamage", &ADeployableTurretActor::CheckTurretDamage)
        .def("TriggerTurretEffect", &ADeployableTurretActor::TriggerTurretEffect)
        .def("Died", &ADeployableTurretActor::Died)
        .def("eventHandleHealthDepleted", &ADeployableTurretActor::eventHandleHealthDepleted)
        .def("ShutOffTurretEffectsOnDeath", &ADeployableTurretActor::ShutOffTurretEffectsOnDeath)
        .def("PostBeginPlay", &ADeployableTurretActor::PostBeginPlay)
        .def("eventReplicatedEvent", &ADeployableTurretActor::eventReplicatedEvent)
          ;
}