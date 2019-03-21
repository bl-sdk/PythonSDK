#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConnectionBandwidthStats()
{
    class_< FConnectionBandwidthStats >("FConnectionBandwidthStats", no_init)
        .def_readwrite("UpstreamRate", &FConnectionBandwidthStats::UpstreamRate)
        .def_readwrite("DownstreamRate", &FConnectionBandwidthStats::DownstreamRate)
        .def_readwrite("RoundtripLatency", &FConnectionBandwidthStats::RoundtripLatency)
  ;
}