#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetime()
{
    py::class_< UParticleModuleLifetime,  UParticleModule   >("UParticleModuleLifetime")
        .def_readwrite("Lifetime", &UParticleModuleLifetime::Lifetime)
        .def("StaticClass", &UParticleModuleLifetime::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}