#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDOFEffect()
{
    class_< UDOFEffect, bases< UPostProcessEffect >  , boost::noncopyable>("UDOFEffect", no_init)
        .def_readwrite("FalloffExponent", &UDOFEffect::FalloffExponent)
        .def_readwrite("BlurKernelSize", &UDOFEffect::BlurKernelSize)
        .def_readwrite("MaxNearBlurAmount", &UDOFEffect::MaxNearBlurAmount)
        .def_readwrite("MinBlurAmount", &UDOFEffect::MinBlurAmount)
        .def_readwrite("MaxFarBlurAmount", &UDOFEffect::MaxFarBlurAmount)
        .def_readwrite("FocusType", &UDOFEffect::FocusType)
        .def_readwrite("FocusInnerRadius", &UDOFEffect::FocusInnerRadius)
        .def_readwrite("FocusDistance", &UDOFEffect::FocusDistance)
        .def_readwrite("FocusPosition", &UDOFEffect::FocusPosition)
        .def_readwrite("TunnelVisionScale", &UDOFEffect::TunnelVisionScale)
        .def_readwrite("TunnelVisionYOffset", &UDOFEffect::TunnelVisionYOffset)
        .def_readwrite("FalloffExponentOverride", &UDOFEffect::FalloffExponentOverride)
        .def_readwrite("BlurKernelSizeOverride", &UDOFEffect::BlurKernelSizeOverride)
        .def_readwrite("MaxNearBlurAmountOverride", &UDOFEffect::MaxNearBlurAmountOverride)
        .def_readwrite("MaxFarBlurAmountOverride", &UDOFEffect::MaxFarBlurAmountOverride)
        .def_readwrite("MinBlurAmountOverride", &UDOFEffect::MinBlurAmountOverride)
        .def_readwrite("FocusInnerRadiusOverride", &UDOFEffect::FocusInnerRadiusOverride)
        .def_readwrite("FocusDistanceOverride", &UDOFEffect::FocusDistanceOverride)
        .def_readwrite("TunnelVisionScaleOverride", &UDOFEffect::TunnelVisionScaleOverride)
        .def_readwrite("TunnelVisionYOffsetOverride", &UDOFEffect::TunnelVisionYOffsetOverride)
        .def("StaticClass", &UDOFEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}