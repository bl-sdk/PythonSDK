#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRateMultiplyLife()
{
    py::class_< UParticleModuleRotationRateMultiplyLife,  UParticleModuleRotationRateBase   >("UParticleModuleRotationRateMultiplyLife")
        .def_readwrite("LifeMultiplier", &UParticleModuleRotationRateMultiplyLife::LifeMultiplier)
        .def("StaticClass", &UParticleModuleRotationRateMultiplyLife::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}