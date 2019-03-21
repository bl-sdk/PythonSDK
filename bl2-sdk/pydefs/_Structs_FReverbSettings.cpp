#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReverbSettings()
{
    class_< FReverbSettings >("FReverbSettings", no_init)
        .def_readwrite("ReverbType", &FReverbSettings::ReverbType)
        .def_readwrite("Volume", &FReverbSettings::Volume)
        .def_readwrite("FadeTime", &FReverbSettings::FadeTime)
        .def_readwrite("ReflectionsDelayOverride", &FReverbSettings::ReflectionsDelayOverride)
        .def_readwrite("LateDelayOverride", &FReverbSettings::LateDelayOverride)
        .def_readwrite("DecayHighFrequencyRatioOverride", &FReverbSettings::DecayHighFrequencyRatioOverride)
  ;
}