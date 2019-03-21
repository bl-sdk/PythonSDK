#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleSystem(py::object m)
{
    py::class_< UParticleSystem,  UObject   >(m, "UParticleSystem")
        .def_readwrite("SystemUpdateMode", &UParticleSystem::SystemUpdateMode)
        .def_readwrite("LODMethod", &UParticleSystem::LODMethod)
        .def_readwrite("OcclusionBoundsMethod", &UParticleSystem::OcclusionBoundsMethod)
        .def_readwrite("UpdateTime_FPS", &UParticleSystem::UpdateTime_FPS)
        .def_readwrite("UpdateTime_Delta", &UParticleSystem::UpdateTime_Delta)
        .def_readwrite("WarmupTime", &UParticleSystem::WarmupTime)
        .def_readwrite("Emitters", &UParticleSystem::Emitters)
        .def_readwrite("PreviewComponent", &UParticleSystem::PreviewComponent)
        .def_readwrite("CurveEdSetup", &UParticleSystem::CurveEdSetup)
        .def_readwrite("LODDistanceCheckTime", &UParticleSystem::LODDistanceCheckTime)
        .def_readwrite("LODDistances", &UParticleSystem::LODDistances)
        .def_readwrite("MaxDrawDistance", &UParticleSystem::MaxDrawDistance)
        .def_readwrite("LODSettings", &UParticleSystem::LODSettings)
        .def_readwrite("FixedRelativeBoundingBox", &UParticleSystem::FixedRelativeBoundingBox)
        .def_readwrite("SecondsBeforeInactive", &UParticleSystem::SecondsBeforeInactive)
        .def_readwrite("Delay", &UParticleSystem::Delay)
        .def_readwrite("DelayLow", &UParticleSystem::DelayLow)
        .def_readwrite("MacroUVPosition", &UParticleSystem::MacroUVPosition)
        .def_readwrite("MacroUVRadius", &UParticleSystem::MacroUVRadius)
        .def_readwrite("CustomOcclusionBounds", &UParticleSystem::CustomOcclusionBounds)
        .def_readwrite("StartAudioEvent", &UParticleSystem::StartAudioEvent)
        .def_readwrite("StopAudioEvent", &UParticleSystem::StopAudioEvent)
        .def_readwrite("StartLoopingAudioEvent", &UParticleSystem::StartLoopingAudioEvent)
        .def_readwrite("StopLoopingAudioEvent", &UParticleSystem::StopLoopingAudioEvent)
        .def_readwrite("fAudioDelaySeconds", &UParticleSystem::fAudioDelaySeconds)
        .def_readwrite("PhysxParticleSystemRef", &UParticleSystem::PhysxParticleSystemRef)
        .def("StaticClass", &UParticleSystem::StaticClass, py::return_value_policy::reference)
        .def("GetMaxLifespan", &UParticleSystem::GetMaxLifespan)
        .def("SetLODDistance", &UParticleSystem::SetLODDistance)
        .def("SetCurrentLODMethod", &UParticleSystem::SetCurrentLODMethod)
        .def("GetLODDistance", &UParticleSystem::GetLODDistance)
        .def("GetLODLevelCount", &UParticleSystem::GetLODLevelCount)
        .def("GetCurrentLODMethod", &UParticleSystem::GetCurrentLODMethod)
        .def("EffectiveParticleSystemAfterPhysXMutator", &UParticleSystem::EffectiveParticleSystemAfterPhysXMutator, py::return_value_policy::reference)
          ;
}