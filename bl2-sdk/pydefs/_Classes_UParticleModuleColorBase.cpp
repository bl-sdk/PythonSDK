#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorBase()
{
    py::class_< UParticleModuleColorBase,  UParticleModule   >("UParticleModuleColorBase")
        .def("StaticClass", &UParticleModuleColorBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}