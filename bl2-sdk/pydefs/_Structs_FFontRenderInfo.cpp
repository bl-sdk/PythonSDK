#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFontRenderInfo(py::object m)
{
    py::class_< FFontRenderInfo >(m, "FFontRenderInfo")
        .def_readwrite("GlowInfo", &FFontRenderInfo::GlowInfo)
  ;
}