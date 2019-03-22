#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULensFlareComponent(py::module &m)
{
    py::class_< ULensFlareComponent,  UPrimitiveComponent   >(m, "ULensFlareComponent")
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
        .def("StaticClass", &ULensFlareComponent::StaticClass, py::return_value_policy::reference)
        .def("SetIsActive", &ULensFlareComponent::SetIsActive)
        .def("SetSourceColor", &ULensFlareComponent::SetSourceColor)
        .def("SetTemplate", &ULensFlareComponent::SetTemplate)
          ;
}