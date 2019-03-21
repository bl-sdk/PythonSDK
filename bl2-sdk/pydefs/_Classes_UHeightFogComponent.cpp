#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHeightFogComponent()
{
    class_< UHeightFogComponent, bases< UActorComponent >  , boost::noncopyable>("UHeightFogComponent", no_init)
        .def_readwrite("Height", &UHeightFogComponent::Height)
        .def_readwrite("Density", &UHeightFogComponent::Density)
        .def_readwrite("LightBrightness", &UHeightFogComponent::LightBrightness)
        .def_readwrite("LightColor", &UHeightFogComponent::LightColor)
        .def_readwrite("ExtinctionDistance", &UHeightFogComponent::ExtinctionDistance)
        .def_readwrite("StartDistance", &UHeightFogComponent::StartDistance)
        .def("StaticClass", &UHeightFogComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetEnabled", &UHeightFogComponent::SetEnabled)
        .staticmethod("StaticClass")
  ;
}