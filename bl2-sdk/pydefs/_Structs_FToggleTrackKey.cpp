#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FToggleTrackKey()
{
    py::class_< FToggleTrackKey >("FToggleTrackKey")
        .def_readwrite("Time", &FToggleTrackKey::Time)
        .def_readwrite("ToggleAction", &FToggleTrackKey::ToggleAction)
  ;
}