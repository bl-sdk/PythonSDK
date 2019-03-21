#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWeatherBehavior(py::object m)
{
    py::class_< UIWeatherBehavior,  UInterface   >(m, "UIWeatherBehavior")
        .def("StaticClass", &UIWeatherBehavior::StaticClass, py::return_value_policy::reference)
        .def("DestroyWeatherSystem", &UIWeatherBehavior::DestroyWeatherSystem)
        .def("CreateWeatherSystem", &UIWeatherBehavior::CreateWeatherSystem)
          ;
}