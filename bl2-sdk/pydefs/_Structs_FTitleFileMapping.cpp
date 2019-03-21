#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTitleFileMapping(py::object m)
{
    py::class_< FTitleFileMapping >(m, "FTitleFileMapping")
        .def_readwrite("Filename", &FTitleFileMapping::Filename)
        .def_readwrite("UGCHandle", &FTitleFileMapping::UGCHandle)
  ;
}