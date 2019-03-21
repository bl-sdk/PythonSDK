#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCompatibilityOnlineContent(py::object m)
{
    py::class_< FCompatibilityOnlineContent >(m, "FCompatibilityOnlineContent")
        .def_readwrite("VersionNumber", &FCompatibilityOnlineContent::VersionNumber)
        .def_readwrite("Container", &FCompatibilityOnlineContent::Container)
        .def_readwrite("Content", &FCompatibilityOnlineContent::Content)
  ;
}