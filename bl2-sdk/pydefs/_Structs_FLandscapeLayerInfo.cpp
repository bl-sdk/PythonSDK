#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLandscapeLayerInfo()
{
    class_< FLandscapeLayerInfo >("FLandscapeLayerInfo", no_init)
        .def_readwrite("LayerName", &FLandscapeLayerInfo::LayerName)
        .def_readwrite("Hardness", &FLandscapeLayerInfo::Hardness)
  ;
}