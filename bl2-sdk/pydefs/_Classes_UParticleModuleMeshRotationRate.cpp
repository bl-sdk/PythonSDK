#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRate()
{
    py::class_< UParticleModuleMeshRotationRate,  UParticleModuleRotationRateBase   >("UParticleModuleMeshRotationRate")
        .def_readwrite("StartRotationRate", &UParticleModuleMeshRotationRate::StartRotationRate)
        .def("StaticClass", &UParticleModuleMeshRotationRate::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}