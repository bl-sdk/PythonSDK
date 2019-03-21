#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMinimapObjectiveIconClip()
{
    class_< FMinimapObjectiveIconClip >("FMinimapObjectiveIconClip", no_init)
        .def_readwrite("OptionalClip", &FMinimapObjectiveIconClip::OptionalClip)
        .def_readwrite("AboveClip", &FMinimapObjectiveIconClip::AboveClip)
        .def_readwrite("BelowClip", &FMinimapObjectiveIconClip::BelowClip)
        .def_readwrite("Object", &FMinimapIconClip::Object)
        .def_readwrite("MapPos", &FMinimapIconClip::MapPos)
  ;
}