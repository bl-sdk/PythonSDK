#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetime(py::module &m)
{
    py::class_< UParticleModuleLifetime,  UParticleModule   >(m, "UParticleModuleLifetime")
        .def_readwrite("Lifetime", &UParticleModuleLifetime::Lifetime)
          ;
}