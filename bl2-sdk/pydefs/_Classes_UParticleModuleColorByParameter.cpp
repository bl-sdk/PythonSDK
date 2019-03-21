#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorByParameter(py::object m)
{
    py::class_< UParticleModuleColorByParameter,  UParticleModuleColorBase   >(m, "UParticleModuleColorByParameter")
        .def_readwrite("ColorParam", &UParticleModuleColorByParameter::ColorParam)
        .def_readwrite("DefaultColor", &UParticleModuleColorByParameter::DefaultColor)
        .def("StaticClass", &UParticleModuleColorByParameter::StaticClass, py::return_value_policy::reference)
          ;
}