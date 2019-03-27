#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAkEventTrackKey(py::module &m)
{
    py::class_< FAkEventTrackKey >(m, "FAkEventTrackKey")
        .def_readwrite("Time", &FAkEventTrackKey::Time)
        .def_readwrite("Event", &FAkEventTrackKey::Event)
  ;
}