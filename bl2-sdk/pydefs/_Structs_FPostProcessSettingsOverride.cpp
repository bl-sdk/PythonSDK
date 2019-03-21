#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPostProcessSettingsOverride()
{
    class_< FPostProcessSettingsOverride >("FPostProcessSettingsOverride", no_init)
        .def_readwrite("Settings", &FPostProcessSettingsOverride::Settings)
        .def_readwrite("CurrentBlendInTime", &FPostProcessSettingsOverride::CurrentBlendInTime)
        .def_readwrite("CurrentBlendOutTime", &FPostProcessSettingsOverride::CurrentBlendOutTime)
        .def_readwrite("BlendInDuration", &FPostProcessSettingsOverride::BlendInDuration)
        .def_readwrite("BlendOutDuration", &FPostProcessSettingsOverride::BlendOutDuration)
        .def_readwrite("BlendStartTime", &FPostProcessSettingsOverride::BlendStartTime)
  ;
}