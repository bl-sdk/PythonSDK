#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLandscapeWeightmapUsage(py::object m)
{
    py::class_< FLandscapeWeightmapUsage >(m, "FLandscapeWeightmapUsage")
        .def_readonly("ChannelUsage", &FLandscapeWeightmapUsage::ChannelUsage)
  ;
}