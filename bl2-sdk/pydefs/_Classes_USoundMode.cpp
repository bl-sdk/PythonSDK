#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoundMode(py::module &m)
{
    py::class_< USoundMode,  UObject   >(m, "USoundMode")
		.def_static("StaticClass", &USoundMode::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EQSettings", &USoundMode::EQSettings)
        .def_readwrite("SoundClassEffects", &USoundMode::SoundClassEffects)
        .def_readwrite("InitialDelay", &USoundMode::InitialDelay)
        .def_readwrite("FadeInTime", &USoundMode::FadeInTime)
        .def_readwrite("Duration", &USoundMode::Duration)
        .def_readwrite("FadeOutTime", &USoundMode::FadeOutTime)
          ;
}