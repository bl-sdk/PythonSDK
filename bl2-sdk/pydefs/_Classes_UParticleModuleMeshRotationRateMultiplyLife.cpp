#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRateMultiplyLife(py::module &m)
{
    py::class_< UParticleModuleMeshRotationRateMultiplyLife,  UParticleModuleRotationRateBase   >(m, "UParticleModuleMeshRotationRateMultiplyLife")
        .def_readwrite("LifeMultiplier", &UParticleModuleMeshRotationRateMultiplyLife::LifeMultiplier)
          ;
}