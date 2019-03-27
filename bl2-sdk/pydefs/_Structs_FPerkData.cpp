#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPerkData(py::module &m)
{
    py::class_< FPerkData >(m, "FPerkData")
        .def_readwrite("ButtonChain", &FPerkData::ButtonChain)
        .def_readwrite("Command", &FPerkData::Command)
  ;
}