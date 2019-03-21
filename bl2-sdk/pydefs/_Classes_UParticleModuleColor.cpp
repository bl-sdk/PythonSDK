#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColor()
{
    py::class_< UParticleModuleColor,  UParticleModuleColorBase   >("UParticleModuleColor")
        .def_readwrite("StartColor", &UParticleModuleColor::StartColor)
        .def_readwrite("StartAlpha", &UParticleModuleColor::StartAlpha)
        .def("StaticClass", &UParticleModuleColor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}