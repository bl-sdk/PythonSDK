#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleUberRainImpacts()
{
    class_< UParticleModuleUberRainImpacts, bases< UParticleModuleUberBase >  , boost::noncopyable>("UParticleModuleUberRainImpacts", no_init)
        .def_readwrite("Lifetime", &UParticleModuleUberRainImpacts::Lifetime)
        .def_readwrite("StartSize", &UParticleModuleUberRainImpacts::StartSize)
        .def_readwrite("StartRotation", &UParticleModuleUberRainImpacts::StartRotation)
        .def_readwrite("LifeMultiplier", &UParticleModuleUberRainImpacts::LifeMultiplier)
        .def_readwrite("PC_VelocityScale", &UParticleModuleUberRainImpacts::PC_VelocityScale)
        .def_readwrite("PC_StartLocation", &UParticleModuleUberRainImpacts::PC_StartLocation)
        .def_readwrite("PC_StartRadius", &UParticleModuleUberRainImpacts::PC_StartRadius)
        .def_readwrite("PC_StartHeight", &UParticleModuleUberRainImpacts::PC_StartHeight)
        .def_readwrite("PC_HeightAxis", &UParticleModuleUberRainImpacts::PC_HeightAxis)
        .def_readwrite("ColorOverLife", &UParticleModuleUberRainImpacts::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberRainImpacts::AlphaOverLife)
        .def("StaticClass", &UParticleModuleUberRainImpacts::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}