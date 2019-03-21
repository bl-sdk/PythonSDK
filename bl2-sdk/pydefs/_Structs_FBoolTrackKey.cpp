#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoolTrackKey()
{
    py::class_< FBoolTrackKey >("FBoolTrackKey")
        .def_readwrite("Time", &FBoolTrackKey::Time)
  ;
}