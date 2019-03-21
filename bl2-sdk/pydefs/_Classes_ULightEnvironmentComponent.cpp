#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULightEnvironmentComponent()
{
    class_< ULightEnvironmentComponent, bases< UActorComponent >  , boost::noncopyable>("ULightEnvironmentComponent", no_init)
        .def_readwrite("DominantShadowFactor", &ULightEnvironmentComponent::DominantShadowFactor)
        .def_readwrite("AffectingDominantLight", &ULightEnvironmentComponent::AffectingDominantLight)
        .def_readwrite("AffectedComponents", &ULightEnvironmentComponent::AffectedComponents)
        .def("StaticClass", &ULightEnvironmentComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsEnabled", &ULightEnvironmentComponent::IsEnabled)
        .def("SetEnabled", &ULightEnvironmentComponent::SetEnabled)
        .staticmethod("StaticClass")
  ;
}