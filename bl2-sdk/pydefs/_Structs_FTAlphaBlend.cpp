#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTAlphaBlend()
{
    py::class_< FTAlphaBlend >("FTAlphaBlend")
        .def_readwrite("AlphaIn", &FTAlphaBlend::AlphaIn)
        .def_readwrite("AlphaOut", &FTAlphaBlend::AlphaOut)
        .def_readwrite("AlphaTarget", &FTAlphaBlend::AlphaTarget)
        .def_readwrite("BlendTime", &FTAlphaBlend::BlendTime)
        .def_readwrite("BlendTimeToGo", &FTAlphaBlend::BlendTimeToGo)
        .def_readwrite("BlendType", &FTAlphaBlend::BlendType)
  ;
}