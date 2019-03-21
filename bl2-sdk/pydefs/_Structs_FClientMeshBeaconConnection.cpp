#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClientMeshBeaconConnection()
{
    class_< FClientMeshBeaconConnection >("FClientMeshBeaconConnection", no_init)
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