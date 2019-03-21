#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPartyBeacon()
{
    class_< UPartyBeacon, bases< UObject >  , boost::noncopyable>("UPartyBeacon", no_init)
        .def_readwrite("VfTable_FTickableObject", &UPartyBeacon::VfTable_FTickableObject)
        .def_readwrite("PartyBeaconPort", &UPartyBeacon::PartyBeaconPort)
        .def_readwrite("Socket", &UPartyBeacon::Socket)
        .def_readwrite("HeartbeatTimeout", &UPartyBeacon::HeartbeatTimeout)
        .def_readwrite("ElapsedHeartbeatTime", &UPartyBeacon::ElapsedHeartbeatTime)
        .def_readwrite("BeaconName", &UPartyBeacon::BeaconName)
        .def("StaticClass", &UPartyBeacon::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnDestroyComplete", &UPartyBeacon::OnDestroyComplete)
        .def("eventDestroyBeacon", &UPartyBeacon::eventDestroyBeacon)
        .staticmethod("StaticClass")
  ;
}