#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDepthFieldGlowInfo()
{
    class_< FDepthFieldGlowInfo >("FDepthFieldGlowInfo", no_init)
        .def_readwrite("GlowColor", &FDepthFieldGlowInfo::GlowColor)
        .def_readwrite("GlowOuterRadius", &FDepthFieldGlowInfo::GlowOuterRadius)
        .def_readwrite("GlowInnerRadius", &FDepthFieldGlowInfo::GlowInnerRadius)
  ;
}