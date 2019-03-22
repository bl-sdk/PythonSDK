#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIHoldDebugData(py::module &m)
{
    py::class_< FAIHoldDebugData >(m, "FAIHoldDebugData")
        .def_readwrite("HoldName", &FAIHoldDebugData::HoldName)
        .def_readwrite("HoldTag", &FAIHoldDebugData::HoldTag)
  ;
}