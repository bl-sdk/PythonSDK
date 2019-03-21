#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugStringData(py::object m)
{
    py::class_< FDebugStringData >(m, "FDebugStringData")
        .def_readwrite("DebugStr", &FDebugStringData::DebugStr)
        .def_readwrite("StrColor", &FDebugStringData::StrColor)
  ;
}