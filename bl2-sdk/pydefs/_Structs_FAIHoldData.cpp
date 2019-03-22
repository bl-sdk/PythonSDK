#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIHoldData(py::module &m)
{
    py::class_< FAIHoldData >(m, "FAIHoldData")
        .def_readwrite("HoldName", &FAIHoldData::HoldName)
        .def_readwrite("HoldTag", &FAIHoldData::HoldTag)
  ;
}