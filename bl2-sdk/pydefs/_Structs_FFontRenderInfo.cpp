#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFontRenderInfo()
{
    class_< FFontRenderInfo >("FFontRenderInfo", no_init)
        .def_readwrite("GlowInfo", &FFontRenderInfo::GlowInfo)
  ;
}