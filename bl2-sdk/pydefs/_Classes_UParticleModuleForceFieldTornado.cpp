#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldTornado()
{
    py::class_< UParticleModuleForceFieldTornado,  UParticleModuleForceFieldBase   >("UParticleModuleForceFieldTornado")
        .def("StaticClass", &UParticleModuleForceFieldTornado::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}