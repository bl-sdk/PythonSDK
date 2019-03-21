#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDepthFieldGlowInfo()
{
    py::class_< FDepthFieldGlowInfo >("FDepthFieldGlowInfo")
        .def_readwrite("GlowColor", &FDepthFieldGlowInfo::GlowColor)
        .def_readwrite("GlowOuterRadius", &FDepthFieldGlowInfo::GlowOuterRadius)
        .def_readwrite("GlowInnerRadius", &FDepthFieldGlowInfo::GlowInnerRadius)
  ;
}