#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpecializedBehaviorEvent()
{
    py::class_< FSpecializedBehaviorEvent >("FSpecializedBehaviorEvent")
        .def_readwrite("EventName", &FSpecializedBehaviorEvent::EventName)
  ;
}