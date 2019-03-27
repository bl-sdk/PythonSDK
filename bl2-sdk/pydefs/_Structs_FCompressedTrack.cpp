#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCompressedTrack(py::module &m)
{
    py::class_< FCompressedTrack >(m, "FCompressedTrack")
        .def_readwrite("ByteStream", &FCompressedTrack::ByteStream)
        .def_readwrite("Times", &FCompressedTrack::Times)
  ;
}