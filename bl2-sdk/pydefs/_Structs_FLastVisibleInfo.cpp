#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLastVisibleInfo(py::module &m)
{
    py::class_< FLastVisibleInfo >(m, "FLastVisibleInfo")
        .def_readwrite("LastVisibleLocation", &FLastVisibleInfo::LastVisibleLocation)
        .def_readwrite("CurrentLocation", &FLastVisibleInfo::CurrentLocation)
  ;
}