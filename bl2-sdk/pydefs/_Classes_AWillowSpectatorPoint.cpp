#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowSpectatorPoint()
{
    py::class_< AWillowSpectatorPoint,  ACameraActor   >("AWillowSpectatorPoint")
        .def("StaticClass", &AWillowSpectatorPoint::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyed", &AWillowSpectatorPoint::eventDestroyed)
        .def("PostBeginPlay", &AWillowSpectatorPoint::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}