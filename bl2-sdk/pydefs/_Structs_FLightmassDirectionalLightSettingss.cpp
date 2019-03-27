#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassDirectionalLightSettings(py::module &m)
{
    py::class_< FLightmassDirectionalLightSettings,  FLightmassLightSettings   >(m, "FLightmassDirectionalLightSettings")
        .def_readwrite("LightSourceAngle", &FLightmassDirectionalLightSettings::LightSourceAngle)
  ;
}