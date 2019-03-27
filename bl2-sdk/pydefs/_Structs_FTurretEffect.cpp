#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTurretEffect(py::module &m)
{
    py::class_< FTurretEffect >(m, "FTurretEffect")
        .def_readwrite("EffectStartTag", &FTurretEffect::EffectStartTag)
        .def_readwrite("EffectEndTag", &FTurretEffect::EffectEndTag)
        .def_readwrite("EffectTemplate", &FTurretEffect::EffectTemplate)
        .def_readwrite("EffectSocket", &FTurretEffect::EffectSocket)
        .def_readwrite("EffectRef", &FTurretEffect::EffectRef)
        .def_readwrite("EffectAudioStartAkEvent", &FTurretEffect::EffectAudioStartAkEvent)
        .def_readwrite("EffectAudioStopAkEvent", &FTurretEffect::EffectAudioStopAkEvent)
  ;
}