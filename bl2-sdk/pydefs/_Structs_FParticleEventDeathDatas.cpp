#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleEventDeathData()
{
    class_< FParticleEventDeathData, bases< FParticleEventData >  >("FParticleEventDeathData", no_init)
        .def_readwrite("ParticleTime", &FParticleEventDeathData::ParticleTime)
  ;
}