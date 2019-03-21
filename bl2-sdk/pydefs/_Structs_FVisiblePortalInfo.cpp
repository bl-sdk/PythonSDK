#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVisiblePortalInfo()
{
    py::class_< FVisiblePortalInfo >("FVisiblePortalInfo")
        .def_readwrite("Source", &FVisiblePortalInfo::Source)
        .def_readwrite("Destination", &FVisiblePortalInfo::Destination)
  ;
}