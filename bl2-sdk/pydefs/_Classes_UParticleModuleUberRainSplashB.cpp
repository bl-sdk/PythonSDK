#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberRainSplashB(py::module &m)
{
    py::class_< UParticleModuleUberRainSplashB,  UParticleModuleUberBase   >(m, "UParticleModuleUberRainSplashB")
		.def_static("StaticClass", &UParticleModuleUberRainSplashB::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Lifetime", &UParticleModuleUberRainSplashB::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberRainSplashB::StartSize)
        .def_readwrite("ColorOverLife", &UParticleModuleUberRainSplashB::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberRainSplashB::AlphaOverLife)
        .def_readwrite("LifeMultiplier", &UParticleModuleUberRainSplashB::LifeMultiplier)
        .def_readwrite("StartRotationRate", &UParticleModuleUberRainSplashB::StartRotationRate)
          ;
}