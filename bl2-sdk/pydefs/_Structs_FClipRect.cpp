#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClipRect()
{
    class_< FClipRect >("FClipRect", no_init)
        .def_readwrite("Top", &FClipRect::Top)
        .def_readwrite("Right", &FClipRect::Right)
        .def_readwrite("Bottom", &FClipRect::Bottom)
        .def_readwrite("Left", &FClipRect::Left)
  ;
}