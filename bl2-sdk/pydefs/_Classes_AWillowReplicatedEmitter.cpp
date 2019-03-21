#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowReplicatedEmitter()
{
    class_< AWillowReplicatedEmitter, bases< AWillowEmitter >  , boost::noncopyable>("AWillowReplicatedEmitter", no_init)
        .def_readwrite("EmitterTemplate", &AWillowReplicatedEmitter::EmitterTemplate)
        .def_readwrite("ServerLifeSpan", &AWillowReplicatedEmitter::ServerLifeSpan)
        .def_readwrite("NumFloatParameters", &AWillowReplicatedEmitter::NumFloatParameters)
        .def_readwrite("NumVectorParameters", &AWillowReplicatedEmitter::NumVectorParameters)
        .def_readwrite("NumColorParameters", &AWillowReplicatedEmitter::NumColorParameters)
        .def_readonly("ReplicatedFloatParameters", &AWillowReplicatedEmitter::ReplicatedFloatParameters)
        .def_readonly("ReplicatedVectorParameters", &AWillowReplicatedEmitter::ReplicatedVectorParameters)
        .def_readonly("ReplicatedColorParameters", &AWillowReplicatedEmitter::ReplicatedColorParameters)
        .def("StaticClass", &AWillowReplicatedEmitter::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_ChangeParticleSystemActiveState", &AWillowReplicatedEmitter::Behavior_ChangeParticleSystemActiveState)
        .def("Behavior_SetObjectParameterValue", &AWillowReplicatedEmitter::Behavior_SetObjectParameterValue)
        .def("Behavior_GetObjectParameterValue", &AWillowReplicatedEmitter::Behavior_GetObjectParameterValue)
        .def("Behavior_GetColorParameterValue", &AWillowReplicatedEmitter::Behavior_GetColorParameterValue)
        .def("Behavior_GetVectorParameterValue", &AWillowReplicatedEmitter::Behavior_GetVectorParameterValue)
        .def("Behavior_GetFloatParameterValue", &AWillowReplicatedEmitter::Behavior_GetFloatParameterValue)
        .def("Behavior_SetColorParameterValue", &AWillowReplicatedEmitter::Behavior_SetColorParameterValue)
        .def("Behavior_SetVectorParameterValue", &AWillowReplicatedEmitter::Behavior_SetVectorParameterValue)
        .def("Behavior_SetFloatParameterValue", &AWillowReplicatedEmitter::Behavior_SetFloatParameterValue)
        .def("ApplyColorParameters", &AWillowReplicatedEmitter::ApplyColorParameters)
        .def("ApplyVectorParameters", &AWillowReplicatedEmitter::ApplyVectorParameters)
        .def("ApplyFloatParameters", &AWillowReplicatedEmitter::ApplyFloatParameters)
        .def("SetColorParameter", &AWillowReplicatedEmitter::SetColorParameter)
        .def("SetVectorParameter", &AWillowReplicatedEmitter::SetVectorParameter)
        .def("SetFloatParameter", &AWillowReplicatedEmitter::SetFloatParameter)
        .def("eventSetTemplate", &AWillowReplicatedEmitter::eventSetTemplate)
        .def("SetTemplateWithCensoredAlternative", &AWillowReplicatedEmitter::SetTemplateWithCensoredAlternative)
        .def("eventReplicatedEvent", &AWillowReplicatedEmitter::eventReplicatedEvent)
        .def("PostBeginPlay", &AWillowReplicatedEmitter::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}