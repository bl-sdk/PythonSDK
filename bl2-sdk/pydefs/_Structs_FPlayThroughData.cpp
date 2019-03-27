#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayThroughData(py::module &m)
{
    py::class_< FPlayThroughData >(m, "FPlayThroughData")
        .def_readwrite("PlayThroughNumber", &FPlayThroughData::PlayThroughNumber)
        .def_readwrite("BalanceDefinitions", &FPlayThroughData::BalanceDefinitions)
  ;
}