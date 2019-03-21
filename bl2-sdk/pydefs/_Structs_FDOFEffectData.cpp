#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDOFEffectData()
{
    class_< FDOFEffectData >("FDOFEffectData", no_init)
        .def_readwrite("FalloffExponent", &FDOFEffectData::FalloffExponent)
        .def_readwrite("BlurKernelSize", &FDOFEffectData::BlurKernelSize)
        .def_readwrite("MaxNearBlurAmount", &FDOFEffectData::MaxNearBlurAmount)
        .def_readwrite("MaxFarBlurAmount", &FDOFEffectData::MaxFarBlurAmount)
        .def_readwrite("ModulateBlurColor", &FDOFEffectData::ModulateBlurColor)
        .def_readwrite("FocusType", &FDOFEffectData::FocusType)
        .def_readwrite("FocusInnerRadius", &FDOFEffectData::FocusInnerRadius)
        .def_readwrite("FocusDistance", &FDOFEffectData::FocusDistance)
        .def_readwrite("FocusPosition", &FDOFEffectData::FocusPosition)
  ;
}