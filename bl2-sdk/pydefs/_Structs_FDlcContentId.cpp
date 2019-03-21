#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcContentId()
{
    py::class_< FDlcContentId >("FDlcContentId")
        .def_readwrite("PackageId", &FDlcContentId::PackageId)
        .def_readwrite("ContentId", &FDlcContentId::ContentId)
  ;
}