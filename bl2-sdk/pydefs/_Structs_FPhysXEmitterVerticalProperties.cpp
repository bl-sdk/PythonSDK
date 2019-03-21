#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPhysXEmitterVerticalProperties()
{
    class_< FPhysXEmitterVerticalProperties >("FPhysXEmitterVerticalProperties", no_init)
        .def_readwrite("ParticlesLodMin", &FPhysXEmitterVerticalProperties::ParticlesLodMin)
        .def_readwrite("ParticlesLodMax", &FPhysXEmitterVerticalProperties::ParticlesLodMax)
        .def_readwrite("PacketsPerPhysXParticleSystemMax", &FPhysXEmitterVerticalProperties::PacketsPerPhysXParticleSystemMax)
        .def_readwrite("SpawnLodVsFifoBias", &FPhysXEmitterVerticalProperties::SpawnLodVsFifoBias)
  ;
}