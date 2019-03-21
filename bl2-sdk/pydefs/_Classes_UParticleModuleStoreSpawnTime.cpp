#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleStoreSpawnTime()
{
    py::class_< UParticleModuleStoreSpawnTime,  UParticleModule   >("UParticleModuleStoreSpawnTime")
        .def("StaticClass", &UParticleModuleStoreSpawnTime::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}