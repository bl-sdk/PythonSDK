#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRotationTrack()
{
    class_< FRotationTrack >("FRotationTrack", no_init)
        .def_readwrite("RotKeys", &FRotationTrack::RotKeys)
        .def_readwrite("Times", &FRotationTrack::Times)
  ;
}