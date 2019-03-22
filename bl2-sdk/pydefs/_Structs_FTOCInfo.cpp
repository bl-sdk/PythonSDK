#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTOCInfo(py::module &m)
{
    py::class_< FTOCInfo >(m, "FTOCInfo")
        .def_readwrite("TOC", &FTOCInfo::TOC)
        .def_readwrite("RootPath", &FTOCInfo::RootPath)
        .def_readwrite("Path", &FTOCInfo::Path)
  ;
}