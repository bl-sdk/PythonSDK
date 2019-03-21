#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URadialBlurComponent()
{
    class_< URadialBlurComponent, bases< UActorComponent >  , boost::noncopyable>("URadialBlurComponent", no_init)
        .def_readwrite("Material", &URadialBlurComponent::Material)
        .def_readwrite("DepthPriorityGroup", &URadialBlurComponent::DepthPriorityGroup)
        .def_readwrite("BlurScale", &URadialBlurComponent::BlurScale)
        .def_readwrite("BlurFalloffExponent", &URadialBlurComponent::BlurFalloffExponent)
        .def_readwrite("BlurOpacity", &URadialBlurComponent::BlurOpacity)
        .def_readwrite("MaxCullDistance", &URadialBlurComponent::MaxCullDistance)
        .def_readwrite("DistanceFalloffExponent", &URadialBlurComponent::DistanceFalloffExponent)
        .def_readonly("UnknownData00", &URadialBlurComponent::UnknownData00)
        .def_readwrite("LocalToWorld", &URadialBlurComponent::LocalToWorld)
        .def("StaticClass", &URadialBlurComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUpdatePropertyBlurOpacity", &URadialBlurComponent::OnUpdatePropertyBlurOpacity)
        .def("OnUpdatePropertyBlurFalloffExponent", &URadialBlurComponent::OnUpdatePropertyBlurFalloffExponent)
        .def("OnUpdatePropertyBlurScale", &URadialBlurComponent::OnUpdatePropertyBlurScale)
        .def("SetEnabled", &URadialBlurComponent::SetEnabled)
        .def("SetBlurOpacity", &URadialBlurComponent::SetBlurOpacity)
        .def("SetBlurFalloffExponent", &URadialBlurComponent::SetBlurFalloffExponent)
        .def("SetBlurScale", &URadialBlurComponent::SetBlurScale)
        .def("SetMaterial", &URadialBlurComponent::SetMaterial)
        .staticmethod("StaticClass")
  ;
}