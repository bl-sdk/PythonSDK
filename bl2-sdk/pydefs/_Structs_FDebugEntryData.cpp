#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugEntryData()
{
    py::class_< FDebugEntryData >("FDebugEntryData")
        .def_readwrite("DebugStrs", &FDebugEntryData::DebugStrs)
  ;
}