#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotation()
{
    py::class_< UParticleModuleRotation,  UParticleModule   >("UParticleModuleRotation")
        .def_readwrite("StartRotation", &UParticleModuleRotation::StartRotation)
        .def("StaticClass", &UParticleModuleRotation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}