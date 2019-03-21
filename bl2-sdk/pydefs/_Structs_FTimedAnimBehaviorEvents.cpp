#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimedAnimBehaviorEvent(py::object m)
{
    py::class_< FTimedAnimBehaviorEvent,  FSpecializedBehaviorEvent   >(m, "FTimedAnimBehaviorEvent")
        .def_readwrite("Time", &FTimedAnimBehaviorEvent::Time)
  ;
}