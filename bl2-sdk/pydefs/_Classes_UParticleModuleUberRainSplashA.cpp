#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleUberRainSplashA()
{
    class_< UParticleModuleUberRainSplashA, bases< UParticleModuleUberBase >  , boost::noncopyable>("UParticleModuleUberRainSplashA", no_init)
        .def_readwrite("Lifetime", &UParticleModuleUberRainSplashA::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberRainSplashA::StartSize)
        .def_readwrite("StartRotation", &UParticleModuleUberRainSplashA::StartRotation)
        .def_readwrite("LifeMultiplier", &UParticleModuleUberRainSplashA::LifeMultiplier)
        .def_readwrite("ColorOverLife", &UParticleModuleUberRainSplashA::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberRainSplashA::AlphaOverLife)
        .def("StaticClass", &UParticleModuleUberRainSplashA::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}