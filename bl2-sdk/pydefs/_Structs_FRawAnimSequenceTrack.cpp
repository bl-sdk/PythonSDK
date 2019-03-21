#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRawAnimSequenceTrack()
{
    py::class_< FRawAnimSequenceTrack >("FRawAnimSequenceTrack")
        .def_readwrite("PosKeys", &FRawAnimSequenceTrack::PosKeys)
        .def_readwrite("RotKeys", &FRawAnimSequenceTrack::RotKeys)
  ;
}