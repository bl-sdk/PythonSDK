#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCollisionBase()
{
    py::class_< UParticleModuleCollisionBase,  UParticleModule   >("UParticleModuleCollisionBase")
        .def("StaticClass", &UParticleModuleCollisionBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}