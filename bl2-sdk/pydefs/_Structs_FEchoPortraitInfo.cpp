#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEchoPortraitInfo()
{
    class_< FEchoPortraitInfo >("FEchoPortraitInfo", no_init)
        .def_readwrite("PortraitType", &FEchoPortraitInfo::PortraitType)
        .def_readwrite("ScaleformPortrait", &FEchoPortraitInfo::ScaleformPortrait)
        .def_readwrite("VideoPortrait", &FEchoPortraitInfo::VideoPortrait)
  ;
}