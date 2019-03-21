#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcContentInfo()
{
    py::class_< FDlcContentInfo >("FDlcContentInfo")
        .def_readwrite("ContentId", &FDlcContentInfo::ContentId)
  ;
}