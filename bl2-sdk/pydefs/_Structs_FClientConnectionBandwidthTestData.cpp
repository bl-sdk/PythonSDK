#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClientConnectionBandwidthTestData()
{
    class_< FClientConnectionBandwidthTestData >("FClientConnectionBandwidthTestData", no_init)
        .def_readwrite("CurrentState", &FClientConnectionBandwidthTestData::CurrentState)
        .def_readwrite("TestType", &FClientConnectionBandwidthTestData::TestType)
        .def_readwrite("BytesTotalNeeded", &FClientConnectionBandwidthTestData::BytesTotalNeeded)
        .def_readwrite("BytesReceived", &FClientConnectionBandwidthTestData::BytesReceived)
        .def_readwrite("RequestTestStartTime", &FClientConnectionBandwidthTestData::RequestTestStartTime)
        .def_readwrite("TestStartTime", &FClientConnectionBandwidthTestData::TestStartTime)
        .def_readwrite("BandwidthStats", &FClientConnectionBandwidthTestData::BandwidthStats)
  ;
}