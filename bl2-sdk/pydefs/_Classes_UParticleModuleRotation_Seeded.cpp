#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotation_Seeded()
{
    py::class_< UParticleModuleRotation_Seeded,  UParticleModuleRotation   >("UParticleModuleRotation_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleRotation_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleRotation_Seeded::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}