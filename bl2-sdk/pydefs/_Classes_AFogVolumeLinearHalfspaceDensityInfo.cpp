#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeLinearHalfspaceDensityInfo()
{
    py::class_< AFogVolumeLinearHalfspaceDensityInfo,  AFogVolumeDensityInfo   >("AFogVolumeLinearHalfspaceDensityInfo")
        .def("StaticClass", &AFogVolumeLinearHalfspaceDensityInfo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}