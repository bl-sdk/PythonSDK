#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRate()
{
    py::class_< UParticleModuleRotationRate,  UParticleModule   >("UParticleModuleRotationRate")
        .def_readwrite("StartRotationRate", &UParticleModuleRotationRate::StartRotationRate)
        .def("StaticClass", &UParticleModuleRotationRate::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}