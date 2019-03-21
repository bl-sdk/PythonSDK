#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeMultiplyVelocity()
{
    py::class_< UParticleModuleSizeMultiplyVelocity,  UParticleModuleSizeBase   >("UParticleModuleSizeMultiplyVelocity")
        .def_readwrite("VelocityMultiplier", &UParticleModuleSizeMultiplyVelocity::VelocityMultiplier)
        .def("StaticClass", &UParticleModuleSizeMultiplyVelocity::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}