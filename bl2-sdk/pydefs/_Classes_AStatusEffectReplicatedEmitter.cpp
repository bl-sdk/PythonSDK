#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStatusEffectReplicatedEmitter(py::module &m)
{
    py::class_< AStatusEffectReplicatedEmitter,  AEmitter   >(m, "AStatusEffectReplicatedEmitter")
        .def_readwrite("EmitterTemplate", &AStatusEffectReplicatedEmitter::EmitterTemplate)
        .def_readwrite("ServerLifeSpan", &AStatusEffectReplicatedEmitter::ServerLifeSpan)
        .def_readwrite("RandomTTL", &AStatusEffectReplicatedEmitter::RandomTTL)
        .def_readwrite("AccumulatedTime", &AStatusEffectReplicatedEmitter::AccumulatedTime)
        .def_readwrite("BaseTarget", &AStatusEffectReplicatedEmitter::BaseTarget)
        .def_readwrite("NetCullDistanceSquared", &AWillowEmitter::NetCullDistanceSquared)
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
          ;
}