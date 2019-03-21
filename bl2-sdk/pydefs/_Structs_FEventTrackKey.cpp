#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEventTrackKey()
{
    py::class_< FEventTrackKey >("FEventTrackKey")
        .def_readwrite("Time", &FEventTrackKey::Time)
        .def_readwrite("EventName", &FEventTrackKey::EventName)
  ;
}