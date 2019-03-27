#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPathSizeInfo(py::module &m)
{
    py::class_< FPathSizeInfo >(m, "FPathSizeInfo")
        .def_readwrite("Desc", &FPathSizeInfo::Desc)
        .def_readwrite("Radius", &FPathSizeInfo::Radius)
        .def_readwrite("Height", &FPathSizeInfo::Height)
        .def_readwrite("CrouchHeight", &FPathSizeInfo::CrouchHeight)
        .def_readwrite("PathColor", &FPathSizeInfo::PathColor)
  ;
}