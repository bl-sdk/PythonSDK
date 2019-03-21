#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIHitRegionInfoProvider()
{
    py::class_< UIHitRegionInfoProvider,  UInterface   >("UIHitRegionInfoProvider")
        .def("StaticClass", &UIHitRegionInfoProvider::StaticClass, py::return_value_policy::reference)
        .def("GetHitRegions", &UIHitRegionInfoProvider::GetHitRegions)
        .staticmethod("StaticClass")
  ;
}