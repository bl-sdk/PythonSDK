#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLandscapeWeightmapUsage()
{
    class_< FLandscapeWeightmapUsage >("FLandscapeWeightmapUsage", no_init)
        .def_readonly("ChannelUsage", &FLandscapeWeightmapUsage::ChannelUsage)
  ;
}