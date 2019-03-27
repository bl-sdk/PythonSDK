#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcContentId(py::module &m)
{
    py::class_< FDlcContentId >(m, "FDlcContentId")
        .def_readwrite("PackageId", &FDlcContentId::PackageId)
        .def_readwrite("ContentId", &FDlcContentId::ContentId)
  ;
}