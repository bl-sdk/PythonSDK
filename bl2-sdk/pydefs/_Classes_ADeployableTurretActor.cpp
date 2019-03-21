#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADeployableTurretActor()
{
    class_< ADeployableTurretActor, bases< AWillowAIPawn >  , boost::noncopyable>("ADeployableTurretActor", no_init)
        .def_readwrite("BounceImpact", &ADeployableTurretActor::BounceImpact)
        .def_readwrite("AtRestSpeedThreshold", &ADeployableTurretActor::AtRestSpeedThreshold)
        .def_readwrite("TurretEffects", &ADeployableTurretActor::TurretEffects)
        .def_readwrite("TurretDamagePct", &ADeployableTurretActor::TurretDamagePct)
        .def_readwrite("DamageEffectTriggers", &ADeployableTurretActor::DamageEffectTriggers)
        .def("StaticClass", &ADeployableTurretActor::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}