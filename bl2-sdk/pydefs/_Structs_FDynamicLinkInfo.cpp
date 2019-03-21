#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDynamicLinkInfo(py::object m)
{
    py::class_< FDynamicLinkInfo >(m, "FDynamicLinkInfo")
        .def_readwrite("LastTargetLocation", &FDynamicLinkInfo::LastTargetLocation)
        .def_readwrite("LastSrcLocation", &FDynamicLinkInfo::LastSrcLocation)
  ;
}