#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEventSpawnData(py::module &m)
{
    py::class_< FParticleEventSpawnData >(m, "FParticleEventSpawnData")
        .def_readwrite("Type", &FParticleEventData::Type)
        .def_readwrite("EventName", &FParticleEventData::EventName)
        .def_readwrite("EmitterTime", &FParticleEventData::EmitterTime)
        .def_readwrite("Location", &FParticleEventData::Location)
        .def_readwrite("Direction", &FParticleEventData::Direction)
        .def_readwrite("Velocity", &FParticleEventData::Velocity)
  ;
}