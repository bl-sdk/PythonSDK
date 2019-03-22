#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeSphericalDensityInfo(py::module &m)
{
    py::class_< AFogVolumeSphericalDensityInfo,  AFogVolumeDensityInfo   >(m, "AFogVolumeSphericalDensityInfo")
          ;
}