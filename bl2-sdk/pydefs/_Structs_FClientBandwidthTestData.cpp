#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClientBandwidthTestData()
{
    class_< FClientBandwidthTestData >("FClientBandwidthTestData", no_init)
        .def_readwrite("TestType", &FClientBandwidthTestData::TestType)
        .def_readwrite("CurrentState", &FClientBandwidthTestData::CurrentState)
        .def_readwrite("NumBytesToSendTotal", &FClientBandwidthTestData::NumBytesToSendTotal)
        .def_readwrite("NumBytesSentTotal", &FClientBandwidthTestData::NumBytesSentTotal)
        .def_readwrite("NumBytesSentLast", &FClientBandwidthTestData::NumBytesSentLast)
        .def_readwrite("ElapsedTestTime", &FClientBandwidthTestData::ElapsedTestTime)
  ;
}