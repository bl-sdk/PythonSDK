#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAISwitchablePylon()
{
    py::class_< AAISwitchablePylon,  APylon   >("AAISwitchablePylon")
        .def("StaticClass", &AAISwitchablePylon::StaticClass, py::return_value_policy::reference)
        .def("eventIsEnabled", &AAISwitchablePylon::eventIsEnabled)
        .def("eventSetEnabled", &AAISwitchablePylon::eventSetEnabled)
        .def("PostBeginPlay", &AAISwitchablePylon::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}