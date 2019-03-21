#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRate_Seeded()
{
    py::class_< UParticleModuleRotationRate_Seeded,  UParticleModule   >("UParticleModuleRotationRate_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleRotationRate_Seeded::RandomSeedInfo)
        .def_readwrite("StartRotationRate", &UParticleModuleRotationRate::StartRotationRate)
        .def("StaticClass", &UParticleModuleRotationRate_Seeded::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}