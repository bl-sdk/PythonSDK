#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSize_Seeded()
{
    py::class_< UParticleModuleSize_Seeded,  UParticleModuleSizeBase   >("UParticleModuleSize_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleSize_Seeded::RandomSeedInfo)
        .def_readwrite("StartSize", &UParticleModuleSize::StartSize)
        .def("StaticClass", &UParticleModuleSize_Seeded::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}