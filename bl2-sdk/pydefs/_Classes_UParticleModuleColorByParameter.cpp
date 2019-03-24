#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorByParameter(py::module &m)
{
    py::class_< UParticleModuleColorByParameter,  UParticleModuleColorBase   >(m, "UParticleModuleColorByParameter")
		.def_static("StaticClass", &UParticleModuleColorByParameter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ColorParam", &UParticleModuleColorByParameter::ColorParam)
        .def_readwrite("DefaultColor", &UParticleModuleColorByParameter::DefaultColor)
          ;
}