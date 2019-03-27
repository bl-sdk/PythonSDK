#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeatherSystemEffects(py::module &m)
{
    py::class_< FWeatherSystemEffects >(m, "FWeatherSystemEffects")
        .def_readwrite("WeatherSystemTemplate", &FWeatherSystemEffects::WeatherSystemTemplate)
        .def_readwrite("ScreenEffectsTemplate", &FWeatherSystemEffects::ScreenEffectsTemplate)
  ;
}