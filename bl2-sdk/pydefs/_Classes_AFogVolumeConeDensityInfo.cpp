#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeConeDensityInfo(py::module &m)
{
    py::class_< AFogVolumeConeDensityInfo,  AFogVolumeDensityInfo   >(m, "AFogVolumeConeDensityInfo")
          ;
}