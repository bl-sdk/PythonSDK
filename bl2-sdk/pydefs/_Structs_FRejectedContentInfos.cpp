#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRejectedContentInfo(py::object m)
{
    py::class_< FRejectedContentInfo,  FInstalledContentInfo   >(m, "FRejectedContentInfo")
        .def_readwrite("Result", &FRejectedContentInfo::Result)
  ;
}