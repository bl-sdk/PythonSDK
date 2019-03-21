#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleUberRainSplashB()
{
    class_< UParticleModuleUberRainSplashB, bases< UParticleModuleUberBase >  , boost::noncopyable>("UParticleModuleUberRainSplashB", no_init)
        .def_readwrite("Lifetime", &UParticleModuleUberRainSplashB::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberRainSplashB::StartSize)
        .def_readwrite("ColorOverLife", &UParticleModuleUberRainSplashB::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberRainSplashB::AlphaOverLife)
        .def_readwrite("LifeMultiplier", &UParticleModuleUberRainSplashB::LifeMultiplier)
        .def_readwrite("StartRotationRate", &UParticleModuleUberRainSplashB::StartRotationRate)
        .def("StaticClass", &UParticleModuleUberRainSplashB::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}