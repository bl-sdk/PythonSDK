#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AEmitter()
{
    class_< AEmitter, bases< AActor >  , boost::noncopyable>("AEmitter", no_init)
        .def_readwrite("ParticleSystemComponent", &AEmitter::ParticleSystemComponent)
        .def_readwrite("LightEnvironment", &AEmitter::LightEnvironment)
        .def("StaticClass", &AEmitter::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}