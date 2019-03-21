#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberRainImpacts(py::object m)
{
    py::class_< UParticleModuleUberRainImpacts,  UParticleModuleUberBase   >(m, "UParticleModuleUberRainImpacts")
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
        .def("StaticClass", &UParticleModuleUberRainImpacts::StaticClass, py::return_value_policy::reference)
          ;
}