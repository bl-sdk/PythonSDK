#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTitleSafeZoneArea()
{
    class_< FTitleSafeZoneArea >("FTitleSafeZoneArea", no_init)
        .def_readwrite("MaxPercentX", &FTitleSafeZoneArea::MaxPercentX)
        .def_readwrite("MaxPercentY", &FTitleSafeZoneArea::MaxPercentY)
        .def_readwrite("RecommendedPercentX", &FTitleSafeZoneArea::RecommendedPercentX)
        .def_readwrite("RecommendedPercentY", &FTitleSafeZoneArea::RecommendedPercentY)
  ;
}