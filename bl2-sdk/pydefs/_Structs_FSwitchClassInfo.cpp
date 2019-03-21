#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSwitchClassInfo()
{
    py::class_< FSwitchClassInfo >("FSwitchClassInfo")
        .def_readwrite("ClassName", &FSwitchClassInfo::ClassName)
        .def_readwrite("bFallThru", &FSwitchClassInfo::bFallThru)
  ;
}