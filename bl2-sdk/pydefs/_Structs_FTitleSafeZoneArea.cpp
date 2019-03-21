#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTitleSafeZoneArea(py::object m)
{
    py::class_< FTitleSafeZoneArea >(m, "FTitleSafeZoneArea")
        .def_readwrite("MaxPercentX", &FTitleSafeZoneArea::MaxPercentX)
        .def_readwrite("MaxPercentY", &FTitleSafeZoneArea::MaxPercentY)
        .def_readwrite("RecommendedPercentX", &FTitleSafeZoneArea::RecommendedPercentX)
        .def_readwrite("RecommendedPercentY", &FTitleSafeZoneArea::RecommendedPercentY)
  ;
}