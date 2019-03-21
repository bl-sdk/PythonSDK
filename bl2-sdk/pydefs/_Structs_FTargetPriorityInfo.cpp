#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTargetPriorityInfo(py::object m)
{
    py::class_< FTargetPriorityInfo >(m, "FTargetPriorityInfo")
        .def_readwrite("TargetName", &FTargetPriorityInfo::TargetName)
        .def_readwrite("ShortName", &FTargetPriorityInfo::ShortName)
        .def_readwrite("Value", &FTargetPriorityInfo::Value)
        .def_readwrite("BarColor", &FTargetPriorityInfo::BarColor)
  ;
}