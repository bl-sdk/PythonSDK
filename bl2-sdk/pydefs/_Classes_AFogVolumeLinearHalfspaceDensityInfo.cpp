#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeLinearHalfspaceDensityInfo(py::object m)
{
    py::class_< AFogVolumeLinearHalfspaceDensityInfo,  AFogVolumeDensityInfo   >(m, "AFogVolumeLinearHalfspaceDensityInfo")
        .def("StaticClass", &AFogVolumeLinearHalfspaceDensityInfo::StaticClass, py::return_value_policy::reference)
          ;
}