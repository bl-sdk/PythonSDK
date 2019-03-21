#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLifetimeBase()
{
    py::class_< UParticleModuleLifetimeBase,  UParticleModule   >("UParticleModuleLifetimeBase")
        .def("StaticClass", &UParticleModuleLifetimeBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}