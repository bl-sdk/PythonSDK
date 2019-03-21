#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FThumbnailLightData()
{
    class_< FThumbnailLightData >("FThumbnailLightData", no_init)
        .def_readwrite("Direction", &FThumbnailLightData::Direction)
        .def_readwrite("Light", &FThumbnailLightData::Light)
  ;
}