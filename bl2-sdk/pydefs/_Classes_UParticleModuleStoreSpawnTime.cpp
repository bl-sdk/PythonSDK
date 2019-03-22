#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleStoreSpawnTime(py::module &m)
{
    py::class_< UParticleModuleStoreSpawnTime,  UParticleModule   >(m, "UParticleModuleStoreSpawnTime")
        .def("StaticClass", &UParticleModuleStoreSpawnTime::StaticClass, py::return_value_policy::reference)
          ;
}