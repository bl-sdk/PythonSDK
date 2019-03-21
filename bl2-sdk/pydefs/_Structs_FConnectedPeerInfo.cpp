#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConnectedPeerInfo()
{
    class_< FConnectedPeerInfo >("FConnectedPeerInfo", no_init)
        .def_readwrite("PlayerID", &FConnectedPeerInfo::PlayerID)
        .def_readwrite("NatType", &FConnectedPeerInfo::NatType)
  ;
}