#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWeatherBehavior(py::module &m)
{
    py::class_< UIWeatherBehavior,  UInterface   >(m, "UIWeatherBehavior")
        .def("DestroyWeatherSystem", &UIWeatherBehavior::DestroyWeatherSystem)
        .def("CreateWeatherSystem", &UIWeatherBehavior::CreateWeatherSystem)
          ;
}