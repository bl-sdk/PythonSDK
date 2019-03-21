#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDominantSpotLightComponent()
{
    class_< UDominantSpotLightComponent, bases< USpotLightComponent >  , boost::noncopyable>("UDominantSpotLightComponent", no_init)
        .def_readonly("UnknownData00", &UDominantSpotLightComponent::UnknownData00)
        .def_readwrite("DominantLightShadowInfo", &UDominantSpotLightComponent::DominantLightShadowInfo)
        .def_readwrite("DominantLightShadowMap", &UDominantSpotLightComponent::DominantLightShadowMap)
        .def("StaticClass", &UDominantSpotLightComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}