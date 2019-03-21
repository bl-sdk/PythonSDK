#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCompatibilityOnlineContent()
{
    py::class_< FCompatibilityOnlineContent >("FCompatibilityOnlineContent")
        .def_readwrite("VersionNumber", &FCompatibilityOnlineContent::VersionNumber)
        .def_readwrite("Container", &FCompatibilityOnlineContent::Container)
        .def_readwrite("Content", &FCompatibilityOnlineContent::Content)
  ;
}