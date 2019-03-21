#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleRandomSeedInfo(py::object m)
{
    py::class_< FParticleRandomSeedInfo >(m, "FParticleRandomSeedInfo")
        .def_readwrite("ParameterName", &FParticleRandomSeedInfo::ParameterName)
        .def_readwrite("RandomSeeds", &FParticleRandomSeedInfo::RandomSeeds)
  ;
}