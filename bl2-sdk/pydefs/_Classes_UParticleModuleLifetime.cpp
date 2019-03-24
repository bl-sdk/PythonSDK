#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetime(py::module &m)
{
    py::class_< UParticleModuleLifetime,  UParticleModule   >(m, "UParticleModuleLifetime")
		.def_static("StaticClass", &UParticleModuleLifetime::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Lifetime", &UParticleModuleLifetime::Lifetime)
          ;
}