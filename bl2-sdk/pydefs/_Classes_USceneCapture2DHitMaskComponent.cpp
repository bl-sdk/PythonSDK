#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USceneCapture2DHitMaskComponent(py::module &m)
{
    py::class_< USceneCapture2DHitMaskComponent,  USceneCaptureComponent   >(m, "USceneCapture2DHitMaskComponent")
        .def_readwrite("TextureTarget", &USceneCapture2DHitMaskComponent::TextureTarget)
        .def_readwrite("SkeletalMeshComp", &USceneCapture2DHitMaskComponent::SkeletalMeshComp)
        .def_readwrite("MaterialIndex", &USceneCapture2DHitMaskComponent::MaterialIndex)
        .def_readwrite("ForceLOD", &USceneCapture2DHitMaskComponent::ForceLOD)
        .def_readwrite("HitMaskCullDistance", &USceneCapture2DHitMaskComponent::HitMaskCullDistance)
        .def_readwrite("FadingStartTimeSinceHit", &USceneCapture2DHitMaskComponent::FadingStartTimeSinceHit)
        .def_readwrite("FadingPercentage", &USceneCapture2DHitMaskComponent::FadingPercentage)
        .def_readwrite("FadingDurationTime", &USceneCapture2DHitMaskComponent::FadingDurationTime)
        .def_readwrite("FadingIntervalTime", &USceneCapture2DHitMaskComponent::FadingIntervalTime)
        .def("SetFadingStartTimeSinceHit", &USceneCapture2DHitMaskComponent::SetFadingStartTimeSinceHit)
        .def("SetCaptureParameters", &USceneCapture2DHitMaskComponent::SetCaptureParameters)
        .def("SetCaptureTargetTexture", &USceneCapture2DHitMaskComponent::SetCaptureTargetTexture)
          ;
}