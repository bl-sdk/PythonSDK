#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UICustomEvent()
{
    py::class_< UICustomEvent,  UInterface   >("UICustomEvent")
        .def("StaticClass", &UICustomEvent::StaticClass, py::return_value_policy::reference)
        .def("eventRunCustomEvent", &UICustomEvent::eventRunCustomEvent)
        .staticmethod("StaticClass")
  ;
}