#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWeatherBehavior()
{
    py::class_< UIWeatherBehavior,  UInterface   >("UIWeatherBehavior")
        .def("StaticClass", &UIWeatherBehavior::StaticClass, py::return_value_policy::reference)
        .def("DestroyWeatherSystem", &UIWeatherBehavior::DestroyWeatherSystem)
        .def("CreateWeatherSystem", &UIWeatherBehavior::CreateWeatherSystem)
        .staticmethod("StaticClass")
  ;
}