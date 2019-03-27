#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRotationTrack(py::module &m)
{
    py::class_< FRotationTrack >(m, "FRotationTrack")
        .def_readwrite("RotKeys", &FRotationTrack::RotKeys)
        .def_readwrite("Times", &FRotationTrack::Times)
  ;
}