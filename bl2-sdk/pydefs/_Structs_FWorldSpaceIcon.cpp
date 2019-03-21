#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWorldSpaceIcon(py::object m)
{
    py::class_< FWorldSpaceIcon >(m, "FWorldSpaceIcon")
        .def_readwrite("IconClip", &FWorldSpaceIcon::IconClip)
        .def_readwrite("ArrowClip", &FWorldSpaceIcon::ArrowClip)
        .def_readwrite("NextOcclusionTestTime", &FWorldSpaceIcon::NextOcclusionTestTime)
        .def_readwrite("CachedTextboxWidth", &FWorldSpaceIcon::CachedTextboxWidth)
        .def_readwrite("CachedTextboxHeight", &FWorldSpaceIcon::CachedTextboxHeight)
  ;
}