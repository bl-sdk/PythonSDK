#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPerkData()
{
    py::class_< FPerkData >("FPerkData")
        .def_readwrite("ButtonChain", &FPerkData::ButtonChain)
        .def_readwrite("Command", &FPerkData::Command)
  ;
}