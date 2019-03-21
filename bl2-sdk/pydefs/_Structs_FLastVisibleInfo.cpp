#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLastVisibleInfo()
{
    py::class_< FLastVisibleInfo >("FLastVisibleInfo")
        .def_readwrite("LastVisibleLocation", &FLastVisibleInfo::LastVisibleLocation)
        .def_readwrite("CurrentLocation", &FLastVisibleInfo::CurrentLocation)
  ;
}