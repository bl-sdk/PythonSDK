#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleReplayTrackKey(py::module &m)
{
    py::class_< FParticleReplayTrackKey >(m, "FParticleReplayTrackKey")
        .def_readwrite("Time", &FParticleReplayTrackKey::Time)
        .def_readwrite("Duration", &FParticleReplayTrackKey::Duration)
        .def_readwrite("ClipIDNumber", &FParticleReplayTrackKey::ClipIDNumber)
  ;
}