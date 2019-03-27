#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberLTISIVCL(py::module &m)
{
    py::class_< UParticleModuleUberLTISIVCL,  UParticleModuleUberBase   >(m, "UParticleModuleUberLTISIVCL")
		.def_static("StaticClass", &UParticleModuleUberLTISIVCL::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Lifetime", &UParticleModuleUberLTISIVCL::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberLTISIVCL::StartSize)
        .def_readwrite("StartVelocity", &UParticleModuleUberLTISIVCL::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleUberLTISIVCL::StartVelocityRadial)
        .def_readwrite("ColorOverLife", &UParticleModuleUberLTISIVCL::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberLTISIVCL::AlphaOverLife)
          ;
}