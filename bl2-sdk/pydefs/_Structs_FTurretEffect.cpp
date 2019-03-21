#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTurretEffect()
{
    class_< FTurretEffect >("FTurretEffect", no_init)
        .def_readwrite("EffectStartTag", &FTurretEffect::EffectStartTag)
        .def_readwrite("EffectEndTag", &FTurretEffect::EffectEndTag)
        .def_readwrite("EffectTemplate", &FTurretEffect::EffectTemplate)
        .def_readwrite("EffectSocket", &FTurretEffect::EffectSocket)
        .def_readwrite("EffectRef", &FTurretEffect::EffectRef)
        .def_readwrite("EffectAudioStartAkEvent", &FTurretEffect::EffectAudioStartAkEvent)
        .def_readwrite("EffectAudioStopAkEvent", &FTurretEffect::EffectAudioStopAkEvent)
  ;
}