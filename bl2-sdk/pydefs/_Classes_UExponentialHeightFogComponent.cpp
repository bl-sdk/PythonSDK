#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExponentialHeightFogComponent()
{
    class_< UExponentialHeightFogComponent, bases< UActorComponent >  , boost::noncopyable>("UExponentialHeightFogComponent", no_init)
        .def_readwrite("FogHeight", &UExponentialHeightFogComponent::FogHeight)
        .def_readwrite("FogDensity", &UExponentialHeightFogComponent::FogDensity)
        .def_readwrite("FogHeightFalloff", &UExponentialHeightFogComponent::FogHeightFalloff)
        .def_readwrite("FogMaxOpacity", &UExponentialHeightFogComponent::FogMaxOpacity)
        .def_readwrite("StartDistance", &UExponentialHeightFogComponent::StartDistance)
        .def_readwrite("LightTerminatorAngle", &UExponentialHeightFogComponent::LightTerminatorAngle)
        .def_readwrite("OppositeLightBrightness", &UExponentialHeightFogComponent::OppositeLightBrightness)
        .def_readwrite("OppositeLightColor", &UExponentialHeightFogComponent::OppositeLightColor)
        .def_readwrite("LightInscatteringBrightness", &UExponentialHeightFogComponent::LightInscatteringBrightness)
        .def_readwrite("LightInscatteringColor", &UExponentialHeightFogComponent::LightInscatteringColor)
        .def("StaticClass", &UExponentialHeightFogComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetEnabled", &UExponentialHeightFogComponent::SetEnabled)
        .staticmethod("StaticClass")
  ;
}