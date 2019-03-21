#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleSystemReplayFrame()
{
    py::class_< FParticleSystemReplayFrame >("FParticleSystemReplayFrame")
        .def_readwrite("Emitters", &FParticleSystemReplayFrame::Emitters)
  ;
}