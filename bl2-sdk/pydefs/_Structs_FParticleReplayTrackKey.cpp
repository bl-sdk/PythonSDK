#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleReplayTrackKey()
{
    class_< FParticleReplayTrackKey >("FParticleReplayTrackKey", no_init)
        .def_readwrite("Time", &FParticleReplayTrackKey::Time)
        .def_readwrite("Duration", &FParticleReplayTrackKey::Duration)
        .def_readwrite("ClipIDNumber", &FParticleReplayTrackKey::ClipIDNumber)
  ;
}