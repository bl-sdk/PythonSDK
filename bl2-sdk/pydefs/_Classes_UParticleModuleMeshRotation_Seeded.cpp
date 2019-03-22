#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotation_Seeded(py::module &m)
{
    py::class_< UParticleModuleMeshRotation_Seeded,  UParticleModuleRotationBase   >(m, "UParticleModuleMeshRotation_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleMeshRotation_Seeded::RandomSeedInfo)
        .def_readwrite("StartRotation", &UParticleModuleMeshRotation::StartRotation)
          ;
}