#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationBase()
{
    py::class_< UParticleModuleRotationBase,  UParticleModule   >("UParticleModuleRotationBase")
        .def("StaticClass", &UParticleModuleRotationBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}