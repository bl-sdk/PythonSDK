#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIUpdatePostProcessOverride()
{
    class_< UIUpdatePostProcessOverride, bases< UInterface >  , boost::noncopyable>("UIUpdatePostProcessOverride", no_init)
        .def("StaticClass", &UIUpdatePostProcessOverride::StaticClass, return_value_policy< reference_existing_object >())
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