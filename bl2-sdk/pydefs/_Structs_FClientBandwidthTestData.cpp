#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClientBandwidthTestData(py::object m)
{
    py::class_< FClientBandwidthTestData >(m, "FClientBandwidthTestData")
        .def_readwrite("TestType", &FClientBandwidthTestData::TestType)
        .def_readwrite("CurrentState", &FClientBandwidthTestData::CurrentState)
        .def_readwrite("NumBytesToSendTotal", &FClientBandwidthTestData::NumBytesToSendTotal)
        .def_readwrite("NumBytesSentTotal", &FClientBandwidthTestData::NumBytesSentTotal)
        .def_readwrite("NumBytesSentLast", &FClientBandwidthTestData::NumBytesSentLast)
        .def_readwrite("ElapsedTestTime", &FClientBandwidthTestData::ElapsedTestTime)
  ;
}