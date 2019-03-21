#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugEntryData(py::object m)
{
    py::class_< FDebugEntryData >(m, "FDebugEntryData")
        .def_readwrite("DebugStrs", &FDebugEntryData::DebugStrs)
  ;
}