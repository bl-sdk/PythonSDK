#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleKillBase()
{
    py::class_< UParticleModuleKillBase,  UParticleModule   >("UParticleModuleKillBase")
        .def("StaticClass", &UParticleModuleKillBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}