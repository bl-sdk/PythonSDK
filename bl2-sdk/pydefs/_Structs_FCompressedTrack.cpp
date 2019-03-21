#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCompressedTrack()
{
    class_< FCompressedTrack >("FCompressedTrack", no_init)
        .def_readwrite("ByteStream", &FCompressedTrack::ByteStream)
        .def_readwrite("Times", &FCompressedTrack::Times)
        .def_readonly("Mins", &FCompressedTrack::Mins)
        .def_readonly("Ranges", &FCompressedTrack::Ranges)
  ;
}