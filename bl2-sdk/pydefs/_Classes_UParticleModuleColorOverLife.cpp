#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorOverLife()
{
    py::class_< UParticleModuleColorOverLife,  UParticleModuleColorBase   >("UParticleModuleColorOverLife")
        .def_readwrite("ColorOverLife", &UParticleModuleColorOverLife::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleColorOverLife::AlphaOverLife)
        .def("StaticClass", &UParticleModuleColorOverLife::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}