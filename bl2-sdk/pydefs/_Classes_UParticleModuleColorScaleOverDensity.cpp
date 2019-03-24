#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorScaleOverDensity(py::module &m)
{
    py::class_< UParticleModuleColorScaleOverDensity,  UParticleModuleColorBase   >(m, "UParticleModuleColorScaleOverDensity")
		.def_static("StaticClass", &UParticleModuleColorScaleOverDensity::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ColorScaleOverDensity", &UParticleModuleColorScaleOverDensity::ColorScaleOverDensity)
        .def_readwrite("AlphaScaleOverDensity", &UParticleModuleColorScaleOverDensity::AlphaScaleOverDensity)
          ;
}