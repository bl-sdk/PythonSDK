#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFontRenderInfo()
{
    py::class_< FFontRenderInfo >("FFontRenderInfo")
        .def_readwrite("GlowInfo", &FFontRenderInfo::GlowInfo)
  ;
}