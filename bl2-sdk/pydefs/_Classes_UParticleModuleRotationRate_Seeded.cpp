#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRate_Seeded(py::module &m)
{
    py::class_< UParticleModuleRotationRate_Seeded,  UParticleModule   >(m, "UParticleModuleRotationRate_Seeded")
		.def_static("StaticClass", &UParticleModuleRotationRate_Seeded::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RandomSeedInfo", &UParticleModuleRotationRate_Seeded::RandomSeedInfo)
        .def_readwrite("StartRotationRate", &UParticleModuleRotationRate::StartRotationRate)
          ;
}