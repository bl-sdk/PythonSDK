#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScaleOverDensity(py::module &m)
{
    py::class_< UParticleModuleSizeScaleOverDensity,  UParticleModule   >(m, "UParticleModuleSizeScaleOverDensity")
		.def_static("StaticClass", &UParticleModuleSizeScaleOverDensity::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SizeScaleOverDensity", &UParticleModuleSizeScaleOverDensity::SizeScaleOverDensity)
          ;
}