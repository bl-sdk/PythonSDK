#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocation_Seeded()
{
    py::class_< UParticleModuleLocation_Seeded,  UParticleModuleLocation   >("UParticleModuleLocation_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleLocation_Seeded::RandomSeedInfo)
        .def("StaticClass", &UParticleModuleLocation_Seeded::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}