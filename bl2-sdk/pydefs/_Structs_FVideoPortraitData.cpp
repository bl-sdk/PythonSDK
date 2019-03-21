#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVideoPortraitData(py::object m)
{
    py::class_< FVideoPortraitData >(m, "FVideoPortraitData")
        .def_readwrite("VideoMovie", &FVideoPortraitData::VideoMovie)
  ;
}