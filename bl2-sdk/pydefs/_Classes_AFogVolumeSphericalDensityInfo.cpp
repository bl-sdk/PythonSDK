#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeSphericalDensityInfo(py::object m)
{
    py::class_< AFogVolumeSphericalDensityInfo,  AFogVolumeDensityInfo   >(m, "AFogVolumeSphericalDensityInfo")
        .def("StaticClass", &AFogVolumeSphericalDensityInfo::StaticClass, py::return_value_policy::reference)
          ;
}