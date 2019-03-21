#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEnvironmentalEffectSetting()
{
    py::class_< FEnvironmentalEffectSetting >("FEnvironmentalEffectSetting")
        .def_readwrite("Effect", &FEnvironmentalEffectSetting::Effect)
        .def_readwrite("Volume", &FEnvironmentalEffectSetting::Volume)
        .def_readwrite("FadeDistance", &FEnvironmentalEffectSetting::FadeDistance)
        .def_readwrite("MinDistance", &FEnvironmentalEffectSetting::MinDistance)
        .def_readwrite("MaxDistance", &FEnvironmentalEffectSetting::MaxDistance)
  ;
}