#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleEmitterReplayFrame()
{
    class_< FParticleEmitterReplayFrame >("FParticleEmitterReplayFrame", no_init)
        .def_readwrite("EmitterType", &FParticleEmitterReplayFrame::EmitterType)
        .def_readwrite("OriginalEmitterIndex", &FParticleEmitterReplayFrame::OriginalEmitterIndex)
        .def_readwrite("FrameState", &FParticleEmitterReplayFrame::FrameState)
  ;
}