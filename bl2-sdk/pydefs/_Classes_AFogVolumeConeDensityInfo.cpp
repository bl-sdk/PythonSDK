#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeConeDensityInfo()
{
    py::class_< AFogVolumeConeDensityInfo,  AFogVolumeDensityInfo   >("AFogVolumeConeDensityInfo")
        .def("StaticClass", &AFogVolumeConeDensityInfo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}