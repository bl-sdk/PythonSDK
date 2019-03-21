#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpeedTravelData()
{
    py::class_< FSpeedTravelData >("FSpeedTravelData")
        .def_readwrite("OriginLeaveTime", &FSpeedTravelData::OriginLeaveTime)
        .def_readwrite("OriginRegion", &FSpeedTravelData::OriginRegion)
  ;
}