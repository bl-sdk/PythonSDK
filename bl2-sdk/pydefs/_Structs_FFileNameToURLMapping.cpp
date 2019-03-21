#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFileNameToURLMapping()
{
    py::class_< FFileNameToURLMapping >("FFileNameToURLMapping")
        .def_readwrite("Filename", &FFileNameToURLMapping::Filename)
        .def_readwrite("UrlMapping", &FFileNameToURLMapping::UrlMapping)
  ;
}