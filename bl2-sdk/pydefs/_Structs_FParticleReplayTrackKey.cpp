#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleReplayTrackKey()
{
    py::class_< FParticleReplayTrackKey >("FParticleReplayTrackKey")
        .def_readwrite("Time", &FParticleReplayTrackKey::Time)
        .def_readwrite("Duration", &FParticleReplayTrackKey::Duration)
        .def_readwrite("ClipIDNumber", &FParticleReplayTrackKey::ClipIDNumber)
  ;
}