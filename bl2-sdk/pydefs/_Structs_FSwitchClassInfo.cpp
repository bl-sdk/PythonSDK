#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSwitchClassInfo(py::object m)
{
    py::class_< FSwitchClassInfo >(m, "FSwitchClassInfo")
        .def_readwrite("ClassName", &FSwitchClassInfo::ClassName)
        .def_readwrite("bFallThru", &FSwitchClassInfo::bFallThru)
  ;
}