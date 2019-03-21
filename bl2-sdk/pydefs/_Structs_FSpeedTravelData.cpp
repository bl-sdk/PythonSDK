#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpeedTravelData()
{
    class_< FSpeedTravelData >("FSpeedTravelData", no_init)
        .def_readwrite("OriginLeaveTime", &FSpeedTravelData::OriginLeaveTime)
        .def_readwrite("OriginRegion", &FSpeedTravelData::OriginRegion)
  ;
}