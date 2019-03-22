#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberRainSplashA(py::module &m)
{
    py::class_< UParticleModuleUberRainSplashA,  UParticleModuleUberBase   >(m, "UParticleModuleUberRainSplashA")
        .def_readwrite("Lifetime", &UParticleModuleUberRainSplashA::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberRainSplashA::StartSize)
        .def_readwrite("StartRotation", &UParticleModuleUberRainSplashA::StartRotation)
        .def_readwrite("LifeMultiplier", &UParticleModuleUberRainSplashA::LifeMultiplier)
        .def_readwrite("ColorOverLife", &UParticleModuleUberRainSplashA::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberRainSplashA::AlphaOverLife)
        .def("StaticClass", &UParticleModuleUberRainSplashA::StaticClass, py::return_value_policy::reference)
          ;
}