#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDepthFieldGlowInfo(py::module &m)
{
    py::class_< FDepthFieldGlowInfo >(m, "FDepthFieldGlowInfo")
        .def_readwrite("GlowColor", &FDepthFieldGlowInfo::GlowColor)
        .def_readwrite("GlowOuterRadius", &FDepthFieldGlowInfo::GlowOuterRadius)
        .def_readwrite("GlowInnerRadius", &FDepthFieldGlowInfo::GlowInnerRadius)
  ;
}