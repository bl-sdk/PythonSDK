#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayThroughData()
{
    py::class_< FPlayThroughData >("FPlayThroughData")
        .def_readwrite("PlayThroughNumber", &FPlayThroughData::PlayThroughNumber)
        .def_readwrite("BalanceDefinitions", &FPlayThroughData::BalanceDefinitions)
  ;
}