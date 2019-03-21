#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCameraBase()
{
    py::class_< UParticleModuleCameraBase,  UParticleModule   >("UParticleModuleCameraBase")
        .def("StaticClass", &UParticleModuleCameraBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}