#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCompressedTrack()
{
    py::class_< FCompressedTrack >("FCompressedTrack")
        .def_readwrite("ByteStream", &FCompressedTrack::ByteStream)
        .def_readwrite("Times", &FCompressedTrack::Times)
        .def_readonly("Mins", &FCompressedTrack::Mins)
        .def_readonly("Ranges", &FCompressedTrack::Ranges)
  ;
}