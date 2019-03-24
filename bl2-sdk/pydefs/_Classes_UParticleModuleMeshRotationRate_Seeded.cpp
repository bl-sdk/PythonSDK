#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRate_Seeded(py::module &m)
{
    py::class_< UParticleModuleMeshRotationRate_Seeded,  UParticleModuleMeshRotationRate   >(m, "UParticleModuleMeshRotationRate_Seeded")
		.def_static("StaticClass", &UParticleModuleMeshRotationRate_Seeded::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RandomSeedInfo", &UParticleModuleMeshRotationRate_Seeded::RandomSeedInfo)
          ;
}