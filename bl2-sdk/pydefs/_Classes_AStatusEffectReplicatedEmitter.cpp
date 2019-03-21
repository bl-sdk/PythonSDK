#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStatusEffectReplicatedEmitter()
{
    class_< AStatusEffectReplicatedEmitter, bases< AEmitter >  , boost::noncopyable>("AStatusEffectReplicatedEmitter", no_init)
        .def_readwrite("EmitterTemplate", &AStatusEffectReplicatedEmitter::EmitterTemplate)
        .def_readwrite("ServerLifeSpan", &AStatusEffectReplicatedEmitter::ServerLifeSpan)
        .def_readwrite("RandomTTL", &AStatusEffectReplicatedEmitter::RandomTTL)
        .def_readwrite("AccumulatedTime", &AStatusEffectReplicatedEmitter::AccumulatedTime)
        .def_readwrite("BaseTarget", &AStatusEffectReplicatedEmitter::BaseTarget)
        .def_readonly("UnknownData00", &AStatusEffectReplicatedEmitter::UnknownData00)
        .def_readwrite("NetCullDistanceSquared", &AWillowEmitter::NetCullDistanceSquared)
        .def("StaticClass", &AStatusEffectReplicatedEmitter::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTearOff", &AStatusEffectReplicatedEmitter::eventTearOff)
        .def("ChooseRandomTTL", &AStatusEffectReplicatedEmitter::ChooseRandomTTL)
        .def("eventBaseChange", &AStatusEffectReplicatedEmitter::eventBaseChange)
        .def("eventTornOff", &AStatusEffectReplicatedEmitter::eventTornOff)
        .def("eventSetTemplate", &AStatusEffectReplicatedEmitter::eventSetTemplate)
        .def("IsEnabled", &AStatusEffectReplicatedEmitter::IsEnabled)
        .def("GetParameterName", &AStatusEffectReplicatedEmitter::GetParameterName)
        .def("ResetDistributionForEffect", &AStatusEffectReplicatedEmitter::ResetDistributionForEffect)
        .def("eventUpdateDistributions", &AStatusEffectReplicatedEmitter::eventUpdateDistributions)
        .def("GetEffectCount", &AStatusEffectReplicatedEmitter::GetEffectCount)
        .def("UpdateEffect", &AStatusEffectReplicatedEmitter::UpdateEffect)
        .def("eventReplicatedEvent", &AStatusEffectReplicatedEmitter::eventReplicatedEvent)
        .def("PostBeginPlay", &AStatusEffectReplicatedEmitter::PostBeginPlay)
        .def("SetOwnerNoSeeEmitter", &AWillowEmitter::SetOwnerNoSeeEmitter)
        .staticmethod("StaticClass")
  ;
}