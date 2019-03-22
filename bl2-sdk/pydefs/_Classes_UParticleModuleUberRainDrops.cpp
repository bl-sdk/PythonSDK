#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberRainDrops(py::module &m)
{
    py::class_< UParticleModuleUberRainDrops,  UParticleModule   >(m, "UParticleModuleUberRainDrops")
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
          ;
}