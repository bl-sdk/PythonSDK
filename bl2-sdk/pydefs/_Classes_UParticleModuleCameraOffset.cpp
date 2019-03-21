#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCameraOffset()
{
    py::class_< UParticleModuleCameraOffset,  UParticleModule   >("UParticleModuleCameraOffset")
        .def_readwrite("CameraOffset", &UParticleModuleCameraOffset::CameraOffset)
        .def_readwrite("UpdateMethod", &UParticleModuleCameraOffset::UpdateMethod)
        .def("StaticClass", &UParticleModuleCameraOffset::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}