#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightmassPrimitiveSettings()
{
    class_< FLightmassPrimitiveSettings >("FLightmassPrimitiveSettings", no_init)
        .def_readwrite("EmissiveLightFalloffExponent", &FLightmassPrimitiveSettings::EmissiveLightFalloffExponent)
        .def_readwrite("EmissiveLightExplicitInfluenceRadius", &FLightmassPrimitiveSettings::EmissiveLightExplicitInfluenceRadius)
        .def_readwrite("EmissiveBoost", &FLightmassPrimitiveSettings::EmissiveBoost)
        .def_readwrite("DiffuseBoost", &FLightmassPrimitiveSettings::DiffuseBoost)
        .def_readwrite("SpecularBoost", &FLightmassPrimitiveSettings::SpecularBoost)
        .def_readwrite("FullyOccludedSamplesFraction", &FLightmassPrimitiveSettings::FullyOccludedSamplesFraction)
  ;
}