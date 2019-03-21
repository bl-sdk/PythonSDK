#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClientConnectionRequest(py::object m)
{
    py::class_< FClientConnectionRequest >(m, "FClientConnectionRequest")
        .def_readwrite("PlayerNetId", &FClientConnectionRequest::PlayerNetId)
        .def_readwrite("NatType", &FClientConnectionRequest::NatType)
        .def_readwrite("GoodHostRatio", &FClientConnectionRequest::GoodHostRatio)
        .def_readwrite("BandwidthHistory", &FClientConnectionRequest::BandwidthHistory)
        .def_readwrite("MinutesSinceLastTest", &FClientConnectionRequest::MinutesSinceLastTest)
  ;
}