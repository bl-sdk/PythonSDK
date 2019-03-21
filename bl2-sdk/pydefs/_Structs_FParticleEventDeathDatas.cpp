#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEventDeathData()
{
    py::class_< FParticleEventDeathData,  FParticleEventData   >("FParticleEventDeathData")
        .def_readwrite("ParticleTime", &FParticleEventDeathData::ParticleTime)
  ;
}