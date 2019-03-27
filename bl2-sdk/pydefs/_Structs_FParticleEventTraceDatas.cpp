#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEventTraceData(py::module &m)
{
    py::class_< FParticleEventTraceData,  FParticleEventData   >(m, "FParticleEventTraceData")
        .def_readwrite("ParticleTime", &FParticleEventTraceData::ParticleTime)
  ;
}