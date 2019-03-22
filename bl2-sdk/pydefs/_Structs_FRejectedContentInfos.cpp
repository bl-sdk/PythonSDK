#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRejectedContentInfo(py::module &m)
{
    py::class_< FRejectedContentInfo,  FInstalledContentInfo   >(m, "FRejectedContentInfo")
        .def_readwrite("Result", &FRejectedContentInfo::Result)
  ;
}