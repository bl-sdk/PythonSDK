#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleStoreSpawnTimeBase()
{
    py::class_< UParticleModuleStoreSpawnTimeBase,  UParticleModule   >("UParticleModuleStoreSpawnTimeBase")
        .def("StaticClass", &UParticleModuleStoreSpawnTimeBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}