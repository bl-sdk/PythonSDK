#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleEventTraceData()
{
    class_< FParticleEventTraceData, bases< FParticleEventData >  >("FParticleEventTraceData", no_init)
        .def_readwrite("ParticleTime", &FParticleEventTraceData::ParticleTime)
  ;
}