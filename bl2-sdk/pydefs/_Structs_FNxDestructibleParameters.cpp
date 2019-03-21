#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNxDestructibleParameters(py::object m)
{
    py::class_< FNxDestructibleParameters >(m, "FNxDestructibleParameters")
        .def_readwrite("DamageThreshold", &FNxDestructibleParameters::DamageThreshold)
        .def_readwrite("DamageToRadius", &FNxDestructibleParameters::DamageToRadius)
        .def_readwrite("DamageCap", &FNxDestructibleParameters::DamageCap)
        .def_readwrite("ForceToDamage", &FNxDestructibleParameters::ForceToDamage)
        .def_readwrite("ImpactVelocityThreshold", &FNxDestructibleParameters::ImpactVelocityThreshold)
        .def_readwrite("MaterialStrength", &FNxDestructibleParameters::MaterialStrength)
        .def_readwrite("DamageToPercentDeformation", &FNxDestructibleParameters::DamageToPercentDeformation)
        .def_readwrite("DeformationPercentLimit", &FNxDestructibleParameters::DeformationPercentLimit)
        .def_readwrite("SupportDepth", &FNxDestructibleParameters::SupportDepth)
        .def_readwrite("DebrisDepth", &FNxDestructibleParameters::DebrisDepth)
        .def_readwrite("EssentialDepth", &FNxDestructibleParameters::EssentialDepth)
        .def_readwrite("DebrisLifetimeMin", &FNxDestructibleParameters::DebrisLifetimeMin)
        .def_readwrite("DebrisLifetimeMax", &FNxDestructibleParameters::DebrisLifetimeMax)
        .def_readwrite("DebrisMaxSeparationMin", &FNxDestructibleParameters::DebrisMaxSeparationMin)
        .def_readwrite("DebrisMaxSeparationMax", &FNxDestructibleParameters::DebrisMaxSeparationMax)
        .def_readwrite("ValidBounds", &FNxDestructibleParameters::ValidBounds)
        .def_readwrite("MaxChunkSpeed", &FNxDestructibleParameters::MaxChunkSpeed)
        .def_readwrite("MassScaleExponent", &FNxDestructibleParameters::MassScaleExponent)
        .def_readwrite("Flags", &FNxDestructibleParameters::Flags)
        .def_readwrite("GrbVolumeLimit", &FNxDestructibleParameters::GrbVolumeLimit)
        .def_readwrite("GrbParticleSpacing", &FNxDestructibleParameters::GrbParticleSpacing)
        .def_readwrite("FractureImpulseScale", &FNxDestructibleParameters::FractureImpulseScale)
        .def_readwrite("DepthParameters", &FNxDestructibleParameters::DepthParameters)
  ;
}