#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundTrackKey(py::object m)
{
    py::class_< FSoundTrackKey >(m, "FSoundTrackKey")
        .def_readwrite("Time", &FSoundTrackKey::Time)
        .def_readwrite("Volume", &FSoundTrackKey::Volume)
        .def_readwrite("Pitch", &FSoundTrackKey::Pitch)
        .def_readwrite("Sound", &FSoundTrackKey::Sound)
  ;
}