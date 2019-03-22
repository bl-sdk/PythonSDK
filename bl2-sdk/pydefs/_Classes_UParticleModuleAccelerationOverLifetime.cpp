#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAccelerationOverLifetime(py::module &m)
{
    py::class_< UParticleModuleAccelerationOverLifetime,  UParticleModuleAccelerationBase   >(m, "UParticleModuleAccelerationOverLifetime")
        .def_readwrite("AccelOverLife", &UParticleModuleAccelerationOverLifetime::AccelOverLife)
          ;
}