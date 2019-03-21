#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleRandomSeedInfo()
{
    py::class_< FParticleRandomSeedInfo >("FParticleRandomSeedInfo")
        .def_readwrite("ParameterName", &FParticleRandomSeedInfo::ParameterName)
        .def_readwrite("RandomSeeds", &FParticleRandomSeedInfo::RandomSeeds)
  ;
}