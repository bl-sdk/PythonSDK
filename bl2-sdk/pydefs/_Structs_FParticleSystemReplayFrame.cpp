#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleSystemReplayFrame(py::object m)
{
    py::class_< FParticleSystemReplayFrame >(m, "FParticleSystemReplayFrame")
        .def_readwrite("Emitters", &FParticleSystemReplayFrame::Emitters)
  ;
}