#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRate_Seeded()
{
    py::class_< UParticleModuleMeshRotationRate_Seeded,  UParticleModuleMeshRotationRate   >("UParticleModuleMeshRotationRate_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleMeshRotationRate_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleMeshRotationRate_Seeded::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}