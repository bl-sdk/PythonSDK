#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassDirectionalLightSettings(py::object m)
{
    py::class_< FLightmassDirectionalLightSettings,  FLightmassLightSettings   >(m, "FLightmassDirectionalLightSettings")
        .def_readwrite("LightSourceAngle", &FLightmassDirectionalLightSettings::LightSourceAngle)
  ;
}