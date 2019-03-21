#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimedAnimBehaviorEvent()
{
    py::class_< FTimedAnimBehaviorEvent,  FSpecializedBehaviorEvent   >("FTimedAnimBehaviorEvent")
        .def_readwrite("Time", &FTimedAnimBehaviorEvent::Time)
  ;
}