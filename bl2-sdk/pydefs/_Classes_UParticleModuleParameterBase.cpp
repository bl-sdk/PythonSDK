#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleParameterBase()
{
    py::class_< UParticleModuleParameterBase,  UParticleModule   >("UParticleModuleParameterBase")
        .def("StaticClass", &UParticleModuleParameterBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}