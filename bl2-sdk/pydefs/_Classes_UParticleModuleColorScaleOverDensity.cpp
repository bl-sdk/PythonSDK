#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorScaleOverDensity()
{
    py::class_< UParticleModuleColorScaleOverDensity,  UParticleModuleColorBase   >("UParticleModuleColorScaleOverDensity")
        .def_readwrite("ColorScaleOverDensity", &UParticleModuleColorScaleOverDensity::ColorScaleOverDensity)
        .def_readwrite("AlphaScaleOverDensity", &UParticleModuleColorScaleOverDensity::AlphaScaleOverDensity)
        .def("StaticClass", &UParticleModuleColorScaleOverDensity::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}