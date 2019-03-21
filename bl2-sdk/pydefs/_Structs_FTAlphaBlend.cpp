#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTAlphaBlend()
{
    class_< FTAlphaBlend >("FTAlphaBlend", no_init)
        .def_readwrite("AlphaIn", &FTAlphaBlend::AlphaIn)
        .def_readwrite("AlphaOut", &FTAlphaBlend::AlphaOut)
        .def_readwrite("AlphaTarget", &FTAlphaBlend::AlphaTarget)
        .def_readwrite("BlendTime", &FTAlphaBlend::BlendTime)
        .def_readwrite("BlendTimeToGo", &FTAlphaBlend::BlendTimeToGo)
        .def_readwrite("BlendType", &FTAlphaBlend::BlendType)
  ;
}