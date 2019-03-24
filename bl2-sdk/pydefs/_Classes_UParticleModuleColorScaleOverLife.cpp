#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorScaleOverLife(py::module &m)
{
    py::class_< UParticleModuleColorScaleOverLife,  UParticleModuleColorBase   >(m, "UParticleModuleColorScaleOverLife")
		.def_static("StaticClass", &UParticleModuleColorScaleOverLife::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ColorScaleOverLife", &UParticleModuleColorScaleOverLife::ColorScaleOverLife)
        .def_readwrite("AlphaScaleOverLife", &UParticleModuleColorScaleOverLife::AlphaScaleOverLife)
          ;
}