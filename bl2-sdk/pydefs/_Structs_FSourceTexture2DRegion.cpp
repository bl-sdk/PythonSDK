#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSourceTexture2DRegion()
{
    class_< FSourceTexture2DRegion >("FSourceTexture2DRegion", no_init)
        .def_readwrite("OffsetX", &FSourceTexture2DRegion::OffsetX)
        .def_readwrite("OffsetY", &FSourceTexture2DRegion::OffsetY)
        .def_readwrite("SizeX", &FSourceTexture2DRegion::SizeX)
        .def_readwrite("SizeY", &FSourceTexture2DRegion::SizeY)
        .def_readwrite("Texture2D", &FSourceTexture2DRegion::Texture2D)
  ;
}