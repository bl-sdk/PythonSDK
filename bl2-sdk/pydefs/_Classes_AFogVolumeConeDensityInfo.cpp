#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeConeDensityInfo(py::object m)
{
    py::class_< AFogVolumeConeDensityInfo,  AFogVolumeDensityInfo   >(m, "AFogVolumeConeDensityInfo")
        .def("StaticClass", &AFogVolumeConeDensityInfo::StaticClass, py::return_value_policy::reference)
          ;
}