#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightmassWorldInfoSettings()
{
    class_< FLightmassWorldInfoSettings >("FLightmassWorldInfoSettings", no_init)
        .def_readwrite("StaticLightingLevelScale", &FLightmassWorldInfoSettings::StaticLightingLevelScale)
        .def_readwrite("NumIndirectLightingBounces", &FLightmassWorldInfoSettings::NumIndirectLightingBounces)
        .def_readwrite("EnvironmentColor", &FLightmassWorldInfoSettings::EnvironmentColor)
        .def_readwrite("EnvironmentIntensity", &FLightmassWorldInfoSettings::EnvironmentIntensity)
        .def_readwrite("EmissiveBoost", &FLightmassWorldInfoSettings::EmissiveBoost)
        .def_readwrite("DiffuseBoost", &FLightmassWorldInfoSettings::DiffuseBoost)
        .def_readwrite("SpecularBoost", &FLightmassWorldInfoSettings::SpecularBoost)
        .def_readwrite("IndirectNormalInfluenceBoost", &FLightmassWorldInfoSettings::IndirectNormalInfluenceBoost)
        .def_readwrite("DirectIlluminationOcclusionFraction", &FLightmassWorldInfoSettings::DirectIlluminationOcclusionFraction)
        .def_readwrite("IndirectIlluminationOcclusionFraction", &FLightmassWorldInfoSettings::IndirectIlluminationOcclusionFraction)
        .def_readwrite("OcclusionExponent", &FLightmassWorldInfoSettings::OcclusionExponent)
        .def_readwrite("FullyOccludedSamplesFraction", &FLightmassWorldInfoSettings::FullyOccludedSamplesFraction)
        .def_readwrite("MaxOcclusionDistance", &FLightmassWorldInfoSettings::MaxOcclusionDistance)
  ;
}