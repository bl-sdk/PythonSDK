#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVideoPortraitData()
{
    py::class_< FVideoPortraitData >("FVideoPortraitData")
        .def_readwrite("VideoMovie", &FVideoPortraitData::VideoMovie)
  ;
}