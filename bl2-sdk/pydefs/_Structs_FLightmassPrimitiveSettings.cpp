#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassPrimitiveSettings(py::module &m)
{
    py::class_< FLightmassPrimitiveSettings >(m, "FLightmassPrimitiveSettings")
        .def_readwrite("EmissiveLightFalloffExponent", &FLightmassPrimitiveSettings::EmissiveLightFalloffExponent)
        .def_readwrite("EmissiveLightExplicitInfluenceRadius", &FLightmassPrimitiveSettings::EmissiveLightExplicitInfluenceRadius)
        .def_readwrite("EmissiveBoost", &FLightmassPrimitiveSettings::EmissiveBoost)
        .def_readwrite("DiffuseBoost", &FLightmassPrimitiveSettings::DiffuseBoost)
        .def_readwrite("SpecularBoost", &FLightmassPrimitiveSettings::SpecularBoost)
        .def_readwrite("FullyOccludedSamplesFraction", &FLightmassPrimitiveSettings::FullyOccludedSamplesFraction)
  ;
}