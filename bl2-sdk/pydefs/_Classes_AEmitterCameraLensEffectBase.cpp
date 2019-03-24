#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AEmitterCameraLensEffectBase(py::module &m)
{
    py::class_< AEmitterCameraLensEffectBase,  AActor   >(m, "AEmitterCameraLensEffectBase")
		.def_static("StaticClass", &AEmitterCameraLensEffectBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PS_CameraEffect", &AEmitterCameraLensEffectBase::PS_CameraEffect)
        .def_readwrite("PS_CameraEffectNonExtremeContent", &AEmitterCameraLensEffectBase::PS_CameraEffectNonExtremeContent)
        .def_readwrite("BaseFOV", &AEmitterCameraLensEffectBase::BaseFOV)
        .def_readwrite("DistFromCamera", &AEmitterCameraLensEffectBase::DistFromCamera)
        .def_readwrite("EmittersToTreatAsSame", &AEmitterCameraLensEffectBase::EmittersToTreatAsSame)
        .def_readwrite("BaseCamera", &AEmitterCameraLensEffectBase::BaseCamera)
        .def_readwrite("ParticleSystemComponent", &AEmitter::ParticleSystemComponent)
        .def_readwrite("LightEnvironment", &AEmitter::LightEnvironment)
        .def("UpdateLocation", &AEmitterCameraLensEffectBase::UpdateLocation)
        .def("ActivateLensEffect", &AEmitterCameraLensEffectBase::ActivateLensEffect)
        .def("PostBeginPlay", &AEmitterCameraLensEffectBase::PostBeginPlay)
        .def("NotifyRetriggered", &AEmitterCameraLensEffectBase::NotifyRetriggered)
        .def("RegisterCamera", &AEmitterCameraLensEffectBase::RegisterCamera)
        .def("Destroyed", &AEmitterCameraLensEffectBase::Destroyed)
        .def("Behavior_Destroy", &AEmitter::Behavior_Destroy)
        .def("HideSelf", &AEmitter::HideSelf)
        .def("ApplyCheckpointRecord", &AEmitter::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &AEmitter::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &AEmitter::ShouldSaveForCheckpoint)
        .def("OnSetParticleSysParam", &AEmitter::OnSetParticleSysParam)
        .def("SetActorParameter", &AEmitter::SetActorParameter)
        .def("SetExtColorParameter", &AEmitter::SetExtColorParameter)
        .def("SetColorParameter", &AEmitter::SetColorParameter)
        .def("SetVectorParameter", &AEmitter::SetVectorParameter)
        .def("SetFloatParameter", &AEmitter::SetFloatParameter)
        .def("ShutDown", &AEmitter::ShutDown)
        .def("OnParticleEventGenerator", &AEmitter::OnParticleEventGenerator)
        .def("OnToggle", &AEmitter::OnToggle)
        .def("OnParticleSystemFinished", &AEmitter::OnParticleSystemFinished)
        .def("eventReplicatedEvent", &AEmitter::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AEmitter::eventPostBeginPlay)
        .def("eventSetTemplate", &AEmitter::eventSetTemplate)
          ;
}