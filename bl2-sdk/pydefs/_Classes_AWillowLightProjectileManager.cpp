#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowLightProjectileManager(py::object m)
{
    py::class_< AWillowLightProjectileManager,  AActor   >(m, "AWillowLightProjectileManager")
        .def_readwrite("WeaponOwner", &AWillowLightProjectileManager::WeaponOwner)
        .def_readwrite("PawnOwner", &AWillowLightProjectileManager::PawnOwner)
        .def_readwrite("MyProjs", &AWillowLightProjectileManager::MyProjs)
        .def_readwrite("RemovedProjs", &AWillowLightProjectileManager::RemovedProjs)
        .def_readonly("ReplicatedProjectiles", &AWillowLightProjectileManager::ReplicatedProjectiles)
        .def_readwrite("ReplicatedCutoffTime", &AWillowLightProjectileManager::ReplicatedCutoffTime)
        .def_readwrite("ProjectileCount", &AWillowLightProjectileManager::ProjectileCount)
        .def_readwrite("MyBeams", &AWillowLightProjectileManager::MyBeams)
        .def_readonly("ReplicatedBeams", &AWillowLightProjectileManager::ReplicatedBeams)
        .def_readonly("RepBeamEndPoints", &AWillowLightProjectileManager::RepBeamEndPoints)
        .def_readwrite("LastTimeSeconds", &AWillowLightProjectileManager::LastTimeSeconds)
        .def_readwrite("DamageApplicationInterval", &AWillowLightProjectileManager::DamageApplicationInterval)
        .def_readwrite("DeadOwnerCheckTime", &AWillowLightProjectileManager::DeadOwnerCheckTime)
        .def("StaticClass", &AWillowLightProjectileManager::StaticClass, py::return_value_policy::reference)
        .def("OnParticleSystemFinished", &AWillowLightProjectileManager::OnParticleSystemFinished)
        .def("eventSpawnOverchargedImpactEffect", &AWillowLightProjectileManager::eventSpawnOverchargedImpactEffect)
        .def("GetReflectionInaccuracyAngle", &AWillowLightProjectileManager::GetReflectionInaccuracyAngle)
        .def("GetReflectionDestination", &AWillowLightProjectileManager::GetReflectionDestination)
        .def("eventCauseBeamRadiusDamage", &AWillowLightProjectileManager::eventCauseBeamRadiusDamage)
        .def("GetBoneNameForBeamLock", &AWillowLightProjectileManager::GetBoneNameForBeamLock)
        .def("DeleteBeamsForSource", &AWillowLightProjectileManager::DeleteBeamsForSource)
        .def("DeleteBeamsFor", &AWillowLightProjectileManager::DeleteBeamsFor)
        .def("DeleteAllBeamsFromWeapon", &AWillowLightProjectileManager::DeleteAllBeamsFromWeapon)
        .def("DeleteAllBeams", &AWillowLightProjectileManager::DeleteAllBeams)
        .def("CleanupProjectiles", &AWillowLightProjectileManager::CleanupProjectiles)
        .def("AddBeam", &AWillowLightProjectileManager::AddBeam)
        .def("AddChildBeam", &AWillowLightProjectileManager::AddChildBeam)
        .def("AddWeaponBeam", &AWillowLightProjectileManager::AddWeaponBeam)
        .def("AddProj", &AWillowLightProjectileManager::AddProj)
        .def("eventDestroyed", &AWillowLightProjectileManager::eventDestroyed)
          ;
}