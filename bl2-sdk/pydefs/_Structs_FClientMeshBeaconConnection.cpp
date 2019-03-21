#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClientMeshBeaconConnection(py::object m)
{
    py::class_< FClientMeshBeaconConnection >(m, "FClientMeshBeaconConnection")
        .def_readwrite("PlayerNetId", &FClientMeshBeaconConnection::PlayerNetId)
        .def_readwrite("ElapsedHeartbeatTime", &FClientMeshBeaconConnection::ElapsedHeartbeatTime)
        .def_readwrite("Socket", &FClientMeshBeaconConnection::Socket)
        .def_readwrite("BandwidthTest", &FClientMeshBeaconConnection::BandwidthTest)
        .def_readwrite("NatType", &FClientMeshBeaconConnection::NatType)
        .def_readwrite("GoodHostRatio", &FClientMeshBeaconConnection::GoodHostRatio)
        .def_readwrite("BandwidthHistory", &FClientMeshBeaconConnection::BandwidthHistory)
        .def_readwrite("MinutesSinceLastTest", &FClientMeshBeaconConnection::MinutesSinceLastTest)
  ;
}