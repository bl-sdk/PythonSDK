#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCameraCutInfo(py::module &m)
{
    py::class_< FCameraCutInfo >(m, "FCameraCutInfo")
        .def_readwrite("Location", &FCameraCutInfo::Location)
        .def_readwrite("TimeStamp", &FCameraCutInfo::TimeStamp)
  ;
}