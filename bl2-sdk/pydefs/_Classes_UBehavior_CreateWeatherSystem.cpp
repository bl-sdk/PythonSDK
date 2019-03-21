#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CreateWeatherSystem(py::object m)
{
    py::class_< UBehavior_CreateWeatherSystem,  UBehaviorBase   >(m, "UBehavior_CreateWeatherSystem")
        .def_readwrite("WeatherSystemTemplate", &UBehavior_CreateWeatherSystem::WeatherSystemTemplate)
        .def_readwrite("ScreenEffectTemplate", &UBehavior_CreateWeatherSystem::ScreenEffectTemplate)
        .def("StaticClass", &UBehavior_CreateWeatherSystem::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CreateWeatherSystem::ApplyBehaviorToContext)
          ;
}