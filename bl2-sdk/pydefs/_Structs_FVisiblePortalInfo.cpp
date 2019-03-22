#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVisiblePortalInfo(py::module &m)
{
    py::class_< FVisiblePortalInfo >(m, "FVisiblePortalInfo")
        .def_readwrite("Source", &FVisiblePortalInfo::Source)
        .def_readwrite("Destination", &FVisiblePortalInfo::Destination)
  ;
}