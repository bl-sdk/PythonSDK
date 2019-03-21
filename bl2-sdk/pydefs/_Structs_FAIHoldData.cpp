#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIHoldData()
{
    py::class_< FAIHoldData >("FAIHoldData")
        .def_readwrite("HoldName", &FAIHoldData::HoldName)
        .def_readwrite("HoldTag", &FAIHoldData::HoldTag)
  ;
}