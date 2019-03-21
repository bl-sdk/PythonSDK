#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleOrientationBase()
{
    py::class_< UParticleModuleOrientationBase,  UParticleModule   >("UParticleModuleOrientationBase")
        .def("StaticClass", &UParticleModuleOrientationBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}