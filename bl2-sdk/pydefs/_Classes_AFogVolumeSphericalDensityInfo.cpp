#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeSphericalDensityInfo(py::module &m)
{
    py::class_< AFogVolumeSphericalDensityInfo,  AFogVolumeDensityInfo   >(m, "AFogVolumeSphericalDensityInfo")
		.def_static("StaticClass", &AFogVolumeSphericalDensityInfo::StaticClass, py::return_value_policy::reference)
          ;
}