#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConnectionBandwidthStats(py::module &m)
{
    py::class_< FConnectionBandwidthStats >(m, "FConnectionBandwidthStats")
        .def_readwrite("UpstreamRate", &FConnectionBandwidthStats::UpstreamRate)
        .def_readwrite("DownstreamRate", &FConnectionBandwidthStats::DownstreamRate)
        .def_readwrite("RoundtripLatency", &FConnectionBandwidthStats::RoundtripLatency)
  ;
}