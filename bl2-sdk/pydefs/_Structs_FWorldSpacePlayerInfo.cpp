#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWorldSpacePlayerInfo()
{
    py::class_< FWorldSpacePlayerInfo >("FWorldSpacePlayerInfo")
        .def_readwrite("WPRI", &FWorldSpacePlayerInfo::WPRI)
        .def_readwrite("WPP", &FWorldSpacePlayerInfo::WPP)
  ;
}