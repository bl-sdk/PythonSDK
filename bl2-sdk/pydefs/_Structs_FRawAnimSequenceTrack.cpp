#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRawAnimSequenceTrack(py::object m)
{
    py::class_< FRawAnimSequenceTrack >(m, "FRawAnimSequenceTrack")
        .def_readwrite("PosKeys", &FRawAnimSequenceTrack::PosKeys)
        .def_readwrite("RotKeys", &FRawAnimSequenceTrack::RotKeys)
  ;
}