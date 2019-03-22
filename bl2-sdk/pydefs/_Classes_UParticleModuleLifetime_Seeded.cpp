#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetime_Seeded(py::module &m)
{
    py::class_< UParticleModuleLifetime_Seeded,  UParticleModule   >(m, "UParticleModuleLifetime_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleLifetime_Seeded::RandomSeedInfo)
        .def_readwrite("Lifetime", &UParticleModuleLifetime::Lifetime)
        .def("StaticClass", &UParticleModuleLifetime_Seeded::StaticClass, py::return_value_policy::reference)
          ;
}