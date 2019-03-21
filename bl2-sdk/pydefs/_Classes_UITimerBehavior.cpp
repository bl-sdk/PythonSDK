#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UITimerBehavior()
{
    py::class_< UITimerBehavior,  UInterface   >("UITimerBehavior")
        .def("StaticClass", &UITimerBehavior::StaticClass, py::return_value_policy::reference)
        .def("SetTimerState", &UITimerBehavior::SetTimerState)
        .def("GetTimerState", &UITimerBehavior::GetTimerState)
        .def("GetTimeSeconds", &UITimerBehavior::GetTimeSeconds)
        .staticmethod("StaticClass")
  ;
}