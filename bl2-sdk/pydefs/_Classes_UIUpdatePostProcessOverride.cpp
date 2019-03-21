#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIUpdatePostProcessOverride()
{
    py::class_< UIUpdatePostProcessOverride,  UInterface   >("UIUpdatePostProcessOverride")
        .def("StaticClass", &UIUpdatePostProcessOverride::StaticClass, py::return_value_policy::reference)
        .def("EndLostShield", &UIUpdatePostProcessOverride::EndLostShield)
        .def("BeginLostShield", &UIUpdatePostProcessOverride::BeginLostShield)
        .def("PopPostProcessChain", &UIUpdatePostProcessOverride::PopPostProcessChain)
        .def("PushPostProcessChain", &UIUpdatePostProcessOverride::PushPostProcessChain)
        .def("ClearPostProcessOverlayQueue", &UIUpdatePostProcessOverride::ClearPostProcessOverlayQueue)
        .def("SetupPostProcessOverlay", &UIUpdatePostProcessOverride::SetupPostProcessOverlay)
        .def("GetPostProcessOverlayIndex", &UIUpdatePostProcessOverride::GetPostProcessOverlayIndex)
        .def("AddPostProcessOverlay", &UIUpdatePostProcessOverride::AddPostProcessOverlay)
        .staticmethod("StaticClass")
  ;
}