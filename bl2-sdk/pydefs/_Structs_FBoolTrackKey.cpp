#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoolTrackKey(py::module &m)
{
    py::class_< FBoolTrackKey >(m, "FBoolTrackKey")
        .def_readwrite("Time", &FBoolTrackKey::Time)
  ;
}