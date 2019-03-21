#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClientBeaconConnection()
{
    class_< FClientBeaconConnection >("FClientBeaconConnection", no_init)
        .def_readwrite("PartyLeader", &FClientBeaconConnection::PartyLeader)
        .def_readwrite("ElapsedHeartbeatTime", &FClientBeaconConnection::ElapsedHeartbeatTime)
        .def_readwrite("Socket", &FClientBeaconConnection::Socket)
  ;
}