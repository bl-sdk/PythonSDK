#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULensFlareComponent()
{
    class_< ULensFlareComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("ULensFlareComponent", no_init)
        .def_readwrite("Template", &ULensFlareComponent::Template)
        .def_readwrite("PreviewInnerCone", &ULensFlareComponent::PreviewInnerCone)
        .def_readwrite("PreviewOuterCone", &ULensFlareComponent::PreviewOuterCone)
        .def_readwrite("PreviewRadius", &ULensFlareComponent::PreviewRadius)
        .def_readwrite("OuterCone", &ULensFlareComponent::OuterCone)
        .def_readwrite("InnerCone", &ULensFlareComponent::InnerCone)
        .def_readwrite("ConeFudgeFactor", &ULensFlareComponent::ConeFudgeFactor)
        .def_readwrite("Radius", &ULensFlareComponent::Radius)
        .def_readwrite("MinStrength", &ULensFlareComponent::MinStrength)
        .def_readwrite("SourceColor", &ULensFlareComponent::SourceColor)
        .def_readwrite("Materials", &ULensFlareComponent::Materials)
        .def_readwrite("ReleaseResourcesFence", &ULensFlareComponent::ReleaseResourcesFence)
        .def_readwrite("NextTraceTime", &ULensFlareComponent::NextTraceTime)
        .def("StaticClass", &ULensFlareComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetIsActive", &ULensFlareComponent::SetIsActive)
        .def("SetSourceColor", &ULensFlareComponent::SetSourceColor)
        .def("SetTemplate", &ULensFlareComponent::SetTemplate)
        .staticmethod("StaticClass")
  ;
}