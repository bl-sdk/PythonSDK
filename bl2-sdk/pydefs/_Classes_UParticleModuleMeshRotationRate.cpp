#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRate(py::module &m)
{
    py::class_< UParticleModuleMeshRotationRate,  UParticleModuleRotationRateBase   >(m, "UParticleModuleMeshRotationRate")
        .def_readwrite("StartRotationRate", &UParticleModuleMeshRotationRate::StartRotationRate)
          ;
}