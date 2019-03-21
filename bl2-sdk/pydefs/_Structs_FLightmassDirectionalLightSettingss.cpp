#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassDirectionalLightSettings()
{
    py::class_< FLightmassDirectionalLightSettings,  FLightmassLightSettings   >("FLightmassDirectionalLightSettings")
        .def_readwrite("LightSourceAngle", &FLightmassDirectionalLightSettings::LightSourceAngle)
  ;
}