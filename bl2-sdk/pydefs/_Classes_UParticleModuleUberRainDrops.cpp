#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleUberRainDrops()
{
    class_< UParticleModuleUberRainDrops, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleUberRainDrops", no_init)
        .def_readwrite("LifetimeMin", &UParticleModuleUberRainDrops::LifetimeMin)
        .def_readwrite("LifetimeMax", &UParticleModuleUberRainDrops::LifetimeMax)
        .def_readwrite("StartSizeMin", &UParticleModuleUberRainDrops::StartSizeMin)
        .def_readwrite("StartSizeMax", &UParticleModuleUberRainDrops::StartSizeMax)
        .def_readwrite("StartVelocityMin", &UParticleModuleUberRainDrops::StartVelocityMin)
        .def_readwrite("StartVelocityMax", &UParticleModuleUberRainDrops::StartVelocityMax)
        .def_readwrite("StartVelocityRadialMin", &UParticleModuleUberRainDrops::StartVelocityRadialMin)
        .def_readwrite("StartVelocityRadialMax", &UParticleModuleUberRainDrops::StartVelocityRadialMax)
        .def_readwrite("ColorOverLife", &UParticleModuleUberRainDrops::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleUberRainDrops::AlphaOverLife)
        .def_readwrite("PC_VelocityScale", &UParticleModuleUberRainDrops::PC_VelocityScale)
        .def_readwrite("PC_StartLocation", &UParticleModuleUberRainDrops::PC_StartLocation)
        .def_readwrite("PC_StartRadius", &UParticleModuleUberRainDrops::PC_StartRadius)
        .def_readwrite("PC_StartHeight", &UParticleModuleUberRainDrops::PC_StartHeight)
        .def_readwrite("PC_HeightAxis", &UParticleModuleUberRainDrops::PC_HeightAxis)
        .def_readwrite("StartLocationMin", &UParticleModuleUberRainDrops::StartLocationMin)
        .def_readwrite("StartLocationMax", &UParticleModuleUberRainDrops::StartLocationMax)
        .def_readwrite("RequiredModules", &UParticleModuleUberBase::RequiredModules)
        .def("StaticClass", &UParticleModuleUberRainDrops::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}