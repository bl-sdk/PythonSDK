#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamBase()
{
    py::class_< UParticleModuleBeamBase,  UParticleModule   >("UParticleModuleBeamBase")
        .def("StaticClass", &UParticleModuleBeamBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}