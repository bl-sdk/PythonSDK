#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleSystemReplayFrame()
{
    class_< FParticleSystemReplayFrame >("FParticleSystemReplayFrame", no_init)
        .def_readwrite("Emitters", &FParticleSystemReplayFrame::Emitters)
  ;
}