#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotation()
{
    py::class_< UParticleModuleMeshRotation,  UParticleModuleRotationBase   >("UParticleModuleMeshRotation")
        .def_readwrite("StartRotation", &UParticleModuleMeshRotation::StartRotation)
        .def("StaticClass", &UParticleModuleMeshRotation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}