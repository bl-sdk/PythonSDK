#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWorldSpaceIcon()
{
    class_< FWorldSpaceIcon >("FWorldSpaceIcon", no_init)
        .def_readwrite("IconClip", &FWorldSpaceIcon::IconClip)
        .def_readwrite("ArrowClip", &FWorldSpaceIcon::ArrowClip)
        .def_readwrite("NextOcclusionTestTime", &FWorldSpaceIcon::NextOcclusionTestTime)
        .def_readwrite("CachedTextboxWidth", &FWorldSpaceIcon::CachedTextboxWidth)
        .def_readwrite("CachedTextboxHeight", &FWorldSpaceIcon::CachedTextboxHeight)
  ;
}