#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEnvironmentalEffectSetting()
{
    class_< FEnvironmentalEffectSetting >("FEnvironmentalEffectSetting", no_init)
        .def_readwrite("Effect", &FEnvironmentalEffectSetting::Effect)
        .def_readwrite("Volume", &FEnvironmentalEffectSetting::Volume)
        .def_readwrite("FadeDistance", &FEnvironmentalEffectSetting::FadeDistance)
        .def_readwrite("MinDistance", &FEnvironmentalEffectSetting::MinDistance)
        .def_readwrite("MaxDistance", &FEnvironmentalEffectSetting::MaxDistance)
  ;
}