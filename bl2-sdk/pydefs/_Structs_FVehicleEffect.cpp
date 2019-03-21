#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleEffect()
{
    class_< FVehicleEffect >("FVehicleEffect", no_init)
        .def_readwrite("EffectStartTag", &FVehicleEffect::EffectStartTag)
        .def_readwrite("EffectEndTag", &FVehicleEffect::EffectEndTag)
        .def_readwrite("EffectTemplate", &FVehicleEffect::EffectTemplate)
        .def_readwrite("EffectSocket", &FVehicleEffect::EffectSocket)
        .def_readwrite("EffectRef", &FVehicleEffect::EffectRef)
        .def_readwrite("EffectAudioStartAkEvent", &FVehicleEffect::EffectAudioStartAkEvent)
        .def_readwrite("EffectAudioStopAkEvent", &FVehicleEffect::EffectAudioStopAkEvent)
  ;
}