#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorScaleOverLife()
{
    py::class_< UParticleModuleColorScaleOverLife,  UParticleModuleColorBase   >("UParticleModuleColorScaleOverLife")
        .def_readwrite("ColorScaleOverLife", &UParticleModuleColorScaleOverLife::ColorScaleOverLife)
        .def_readwrite("AlphaScaleOverLife", &UParticleModuleColorScaleOverLife::AlphaScaleOverLife)
        .def("StaticClass", &UParticleModuleColorScaleOverLife::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}