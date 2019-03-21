#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPerPlayerSplitscreenData()
{
    class_< FPerPlayerSplitscreenData >("FPerPlayerSplitscreenData", no_init)
        .def_readwrite("SizeX", &FPerPlayerSplitscreenData::SizeX)
        .def_readwrite("SizeY", &FPerPlayerSplitscreenData::SizeY)
        .def_readwrite("OriginX", &FPerPlayerSplitscreenData::OriginX)
        .def_readwrite("OriginY", &FPerPlayerSplitscreenData::OriginY)
  ;
}