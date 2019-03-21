#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEvent_GenerateInfo(py::object m)
{
    py::class_< FParticleEvent_GenerateInfo >(m, "FParticleEvent_GenerateInfo")
        .def_readwrite("Type", &FParticleEvent_GenerateInfo::Type)
        .def_readwrite("Frequency", &FParticleEvent_GenerateInfo::Frequency)
        .def_readwrite("LowFreq", &FParticleEvent_GenerateInfo::LowFreq)
        .def_readwrite("ParticleFrequency", &FParticleEvent_GenerateInfo::ParticleFrequency)
        .def_readwrite("CustomName", &FParticleEvent_GenerateInfo::CustomName)
        .def_readwrite("ParticleModuleEventsToSendToGame", &FParticleEvent_GenerateInfo::ParticleModuleEventsToSendToGame)
  ;
}