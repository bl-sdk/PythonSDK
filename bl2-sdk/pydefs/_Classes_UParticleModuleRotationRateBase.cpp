#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRateBase()
{
    py::class_< UParticleModuleRotationRateBase,  UParticleModule   >("UParticleModuleRotationRateBase")
        .def("StaticClass", &UParticleModuleRotationRateBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}