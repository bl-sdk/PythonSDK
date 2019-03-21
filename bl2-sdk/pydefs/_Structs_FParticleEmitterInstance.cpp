#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleEmitterInstance()
{
    class_< FParticleEmitterInstance >("FParticleEmitterInstance", no_init)
  ;
}