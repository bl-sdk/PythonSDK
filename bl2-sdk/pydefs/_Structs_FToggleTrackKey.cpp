#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FToggleTrackKey(py::object m)
{
    py::class_< FToggleTrackKey >(m, "FToggleTrackKey")
        .def_readwrite("Time", &FToggleTrackKey::Time)
        .def_readwrite("ToggleAction", &FToggleTrackKey::ToggleAction)
  ;
}