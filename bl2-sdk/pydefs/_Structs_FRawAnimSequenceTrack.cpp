#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRawAnimSequenceTrack()
{
    class_< FRawAnimSequenceTrack >("FRawAnimSequenceTrack", no_init)
        .def_readwrite("PosKeys", &FRawAnimSequenceTrack::PosKeys)
        .def_readwrite("RotKeys", &FRawAnimSequenceTrack::RotKeys)
  ;
}