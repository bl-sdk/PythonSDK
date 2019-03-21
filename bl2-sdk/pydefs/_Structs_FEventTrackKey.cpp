#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEventTrackKey(py::object m)
{
    py::class_< FEventTrackKey >(m, "FEventTrackKey")
        .def_readwrite("Time", &FEventTrackKey::Time)
        .def_readwrite("EventName", &FEventTrackKey::EventName)
  ;
}