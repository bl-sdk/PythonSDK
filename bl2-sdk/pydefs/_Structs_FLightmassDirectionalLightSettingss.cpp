#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightmassDirectionalLightSettings()
{
    class_< FLightmassDirectionalLightSettings, bases< FLightmassLightSettings >  >("FLightmassDirectionalLightSettings", no_init)
        .def_readwrite("LightSourceAngle", &FLightmassDirectionalLightSettings::LightSourceAngle)
  ;
}