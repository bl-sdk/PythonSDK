#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSize_Seeded(py::module &m)
{
    py::class_< UParticleModuleSize_Seeded,  UParticleModuleSizeBase   >(m, "UParticleModuleSize_Seeded")
		.def_static("StaticClass", &UParticleModuleSize_Seeded::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RandomSeedInfo", &UParticleModuleSize_Seeded::RandomSeedInfo)
        .def_readwrite("StartSize", &UParticleModuleSize::StartSize)
          ;
}