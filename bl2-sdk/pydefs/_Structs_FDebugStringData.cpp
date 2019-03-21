#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugStringData()
{
    py::class_< FDebugStringData >("FDebugStringData")
        .def_readwrite("DebugStr", &FDebugStringData::DebugStr)
        .def_readwrite("StrColor", &FDebugStringData::StrColor)
  ;
}