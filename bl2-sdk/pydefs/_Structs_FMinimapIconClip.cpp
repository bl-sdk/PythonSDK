#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMinimapIconClip()
{
    class_< FMinimapIconClip >("FMinimapIconClip", no_init)
        .def_readwrite("Object", &FMinimapIconClip::Object)
        .def_readwrite("MapPos", &FMinimapIconClip::MapPos)
  ;
}