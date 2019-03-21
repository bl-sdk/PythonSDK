#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRejectedContentInfo()
{
    py::class_< FRejectedContentInfo,  FInstalledContentInfo   >("FRejectedContentInfo")
        .def_readwrite("Result", &FRejectedContentInfo::Result)
  ;
}