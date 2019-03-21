#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFogVolumeDensityComponent()
{
    class_< UFogVolumeDensityComponent, bases< UActorComponent >  , boost::noncopyable>("UFogVolumeDensityComponent", no_init)
        .def_readwrite("FogMaterial", &UFogVolumeDensityComponent::FogMaterial)
        .def_readwrite("DefaultFogVolumeMaterial", &UFogVolumeDensityComponent::DefaultFogVolumeMaterial)
        .def_readwrite("SimpleLightColor", &UFogVolumeDensityComponent::SimpleLightColor)
        .def_readwrite("ApproxFogLightColor", &UFogVolumeDensityComponent::ApproxFogLightColor)
        .def_readwrite("StartDistance", &UFogVolumeDensityComponent::StartDistance)
        .def_readwrite("MaxDistance", &UFogVolumeDensityComponent::MaxDistance)
        .def_readwrite("FogVolumeActors", &UFogVolumeDensityComponent::FogVolumeActors)
        .def("StaticClass", &UFogVolumeDensityComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetEnabled", &UFogVolumeDensityComponent::SetEnabled)
        .staticmethod("StaticClass")
  ;
}