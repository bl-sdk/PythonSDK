#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRateOverLife()
{
    py::class_< UParticleModuleMeshRotationRateOverLife,  UParticleModuleRotationRateBase   >("UParticleModuleMeshRotationRateOverLife")
        .def_readwrite("RotRate", &UParticleModuleMeshRotationRateOverLife::RotRate)
        .def("StaticClass", &UParticleModuleMeshRotationRateOverLife::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}