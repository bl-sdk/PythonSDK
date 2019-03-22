#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCameraOffset(py::module &m)
{
    py::class_< UParticleModuleCameraOffset,  UParticleModule   >(m, "UParticleModuleCameraOffset")
        .def_readwrite("CameraOffset", &UParticleModuleCameraOffset::CameraOffset)
        .def_readwrite("UpdateMethod", &UParticleModuleCameraOffset::UpdateMethod)
          ;
}