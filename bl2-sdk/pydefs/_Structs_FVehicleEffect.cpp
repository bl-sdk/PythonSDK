#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleEffect(py::module &m)
{
    py::class_< FVehicleEffect >(m, "FVehicleEffect")
        .def_readwrite("EffectStartTag", &FVehicleEffect::EffectStartTag)
        .def_readwrite("EffectEndTag", &FVehicleEffect::EffectEndTag)
        .def_readwrite("EffectTemplate", &FVehicleEffect::EffectTemplate)
        .def_readwrite("EffectSocket", &FVehicleEffect::EffectSocket)
        .def_readwrite("EffectRef", &FVehicleEffect::EffectRef)
        .def_readwrite("EffectAudioStartAkEvent", &FVehicleEffect::EffectAudioStartAkEvent)
        .def_readwrite("EffectAudioStopAkEvent", &FVehicleEffect::EffectAudioStopAkEvent)
  ;
}