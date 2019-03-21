#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReverbSettings()
{
    py::class_< FReverbSettings >("FReverbSettings")
        .def_readwrite("ReverbType", &FReverbSettings::ReverbType)
        .def_readwrite("Volume", &FReverbSettings::Volume)
        .def_readwrite("FadeTime", &FReverbSettings::FadeTime)
        .def_readwrite("ReflectionsDelayOverride", &FReverbSettings::ReflectionsDelayOverride)
        .def_readwrite("LateDelayOverride", &FReverbSettings::LateDelayOverride)
        .def_readwrite("DecayHighFrequencyRatioOverride", &FReverbSettings::DecayHighFrequencyRatioOverride)
  ;
}