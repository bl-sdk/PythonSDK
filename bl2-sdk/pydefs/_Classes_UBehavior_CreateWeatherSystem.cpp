#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CreateWeatherSystem()
{
    class_< UBehavior_CreateWeatherSystem, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CreateWeatherSystem", no_init)
        .def_readwrite("WeatherSystemTemplate", &UBehavior_CreateWeatherSystem::WeatherSystemTemplate)
        .def_readwrite("ScreenEffectTemplate", &UBehavior_CreateWeatherSystem::ScreenEffectTemplate)
        .def("StaticClass", &UBehavior_CreateWeatherSystem::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CreateWeatherSystem::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}