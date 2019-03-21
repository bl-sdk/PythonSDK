#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeatherSystemEffects()
{
    py::class_< FWeatherSystemEffects >("FWeatherSystemEffects")
        .def_readwrite("WeatherSystemTemplate", &FWeatherSystemEffects::WeatherSystemTemplate)
        .def_readwrite("ScreenEffectsTemplate", &FWeatherSystemEffects::ScreenEffectsTemplate)
  ;
}