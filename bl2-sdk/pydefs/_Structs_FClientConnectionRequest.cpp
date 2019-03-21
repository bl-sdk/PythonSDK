#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClientConnectionRequest()
{
    class_< FClientConnectionRequest >("FClientConnectionRequest", no_init)
        .def_readwrite("PlayerNetId", &FClientConnectionRequest::PlayerNetId)
        .def_readwrite("NatType", &FClientConnectionRequest::NatType)
        .def_readwrite("GoodHostRatio", &FClientConnectionRequest::GoodHostRatio)
        .def_readwrite("BandwidthHistory", &FClientConnectionRequest::BandwidthHistory)
        .def_readwrite("MinutesSinceLastTest", &FClientConnectionRequest::MinutesSinceLastTest)
  ;
}