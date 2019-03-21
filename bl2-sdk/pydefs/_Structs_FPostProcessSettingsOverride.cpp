#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessSettingsOverride()
{
    py::class_< FPostProcessSettingsOverride >("FPostProcessSettingsOverride")
        .def_readwrite("Settings", &FPostProcessSettingsOverride::Settings)
        .def_readwrite("CurrentBlendInTime", &FPostProcessSettingsOverride::CurrentBlendInTime)
        .def_readwrite("CurrentBlendOutTime", &FPostProcessSettingsOverride::CurrentBlendOutTime)
        .def_readwrite("BlendInDuration", &FPostProcessSettingsOverride::BlendInDuration)
        .def_readwrite("BlendOutDuration", &FPostProcessSettingsOverride::BlendOutDuration)
        .def_readwrite("BlendStartTime", &FPostProcessSettingsOverride::BlendStartTime)
  ;
}