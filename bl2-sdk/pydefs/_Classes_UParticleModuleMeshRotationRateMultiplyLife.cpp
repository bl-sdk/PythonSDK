#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRateMultiplyLife()
{
    py::class_< UParticleModuleMeshRotationRateMultiplyLife,  UParticleModuleRotationRateBase   >("UParticleModuleMeshRotationRateMultiplyLife")
        .def_readwrite("LifeMultiplier", &UParticleModuleMeshRotationRateMultiplyLife::LifeMultiplier)
        .def("StaticClass", &UParticleModuleMeshRotationRateMultiplyLife::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}