#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAccelerationBase()
{
    py::class_< UParticleModuleAccelerationBase,  UParticleModule   >("UParticleModuleAccelerationBase")
        .def("StaticClass", &UParticleModuleAccelerationBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}