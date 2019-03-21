#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIHoldDebugData()
{
    py::class_< FAIHoldDebugData >("FAIHoldDebugData")
        .def_readwrite("HoldName", &FAIHoldDebugData::HoldName)
        .def_readwrite("HoldTag", &FAIHoldDebugData::HoldTag)
  ;
}