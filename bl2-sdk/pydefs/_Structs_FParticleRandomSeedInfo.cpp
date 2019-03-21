#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleRandomSeedInfo()
{
    class_< FParticleRandomSeedInfo >("FParticleRandomSeedInfo", no_init)
        .def_readwrite("ParameterName", &FParticleRandomSeedInfo::ParameterName)
        .def_readwrite("RandomSeeds", &FParticleRandomSeedInfo::RandomSeeds)
  ;
}