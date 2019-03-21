#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeatherSystemEffects()
{
    class_< FWeatherSystemEffects >("FWeatherSystemEffects", no_init)
        .def_readwrite("WeatherSystemTemplate", &FWeatherSystemEffects::WeatherSystemTemplate)
        .def_readwrite("ScreenEffectsTemplate", &FWeatherSystemEffects::ScreenEffectsTemplate)
  ;
}