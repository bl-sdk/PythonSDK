#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpeedTravelData(py::module &m)
{
    py::class_< FSpeedTravelData >(m, "FSpeedTravelData")
        .def_readwrite("OriginLeaveTime", &FSpeedTravelData::OriginLeaveTime)
        .def_readwrite("OriginRegion", &FSpeedTravelData::OriginRegion)
  ;
}