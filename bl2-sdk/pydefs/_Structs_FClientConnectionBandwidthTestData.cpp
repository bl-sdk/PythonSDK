#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClientConnectionBandwidthTestData(py::object m)
{
    py::class_< FClientConnectionBandwidthTestData >(m, "FClientConnectionBandwidthTestData")
        .def_readwrite("CurrentState", &FClientConnectionBandwidthTestData::CurrentState)
        .def_readwrite("TestType", &FClientConnectionBandwidthTestData::TestType)
        .def_readwrite("BytesTotalNeeded", &FClientConnectionBandwidthTestData::BytesTotalNeeded)
        .def_readwrite("BytesReceived", &FClientConnectionBandwidthTestData::BytesReceived)
        .def_readwrite("RequestTestStartTime", &FClientConnectionBandwidthTestData::RequestTestStartTime)
        .def_readwrite("TestStartTime", &FClientConnectionBandwidthTestData::TestStartTime)
        .def_readwrite("BandwidthStats", &FClientConnectionBandwidthTestData::BandwidthStats)
  ;
}