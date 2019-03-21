#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPhysXEmitterVerticalProperties()
{
    py::class_< FPhysXEmitterVerticalProperties >("FPhysXEmitterVerticalProperties")
        .def_readwrite("ParticlesLodMin", &FPhysXEmitterVerticalProperties::ParticlesLodMin)
        .def_readwrite("ParticlesLodMax", &FPhysXEmitterVerticalProperties::ParticlesLodMax)
        .def_readwrite("PacketsPerPhysXParticleSystemMax", &FPhysXEmitterVerticalProperties::PacketsPerPhysXParticleSystemMax)
        .def_readwrite("SpawnLodVsFifoBias", &FPhysXEmitterVerticalProperties::SpawnLodVsFifoBias)
  ;
}