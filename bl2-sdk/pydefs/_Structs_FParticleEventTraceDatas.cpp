#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEventTraceData()
{
    py::class_< FParticleEventTraceData,  FParticleEventData   >("FParticleEventTraceData")
        .def_readwrite("ParticleTime", &FParticleEventTraceData::ParticleTime)
  ;
}