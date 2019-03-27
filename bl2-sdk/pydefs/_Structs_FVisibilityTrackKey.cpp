#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVisibilityTrackKey(py::module &m)
{
    py::class_< FVisibilityTrackKey >(m, "FVisibilityTrackKey")
        .def_readwrite("Time", &FVisibilityTrackKey::Time)
        .def_readwrite("Action", &FVisibilityTrackKey::Action)
        .def_readwrite("ActiveCondition", &FVisibilityTrackKey::ActiveCondition)
  ;
}