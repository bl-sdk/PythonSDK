#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPartyBeacon()
{
    py::class_< UPartyBeacon,  UObject   >("UPartyBeacon")
        .def_readwrite("VfTable_FTickableObject", &UPartyBeacon::VfTable_FTickableObject)
        .def_readwrite("PartyBeaconPort", &UPartyBeacon::PartyBeaconPort)
        .def_readwrite("Socket", &UPartyBeacon::Socket)
        .def_readwrite("HeartbeatTimeout", &UPartyBeacon::HeartbeatTimeout)
        .def_readwrite("ElapsedHeartbeatTime", &UPartyBeacon::ElapsedHeartbeatTime)
        .def_readwrite("BeaconName", &UPartyBeacon::BeaconName)
        .def("StaticClass", &UPartyBeacon::StaticClass, py::return_value_policy::reference)
        .def("OnDestroyComplete", &UPartyBeacon::OnDestroyComplete)
        .def("eventDestroyBeacon", &UPartyBeacon::eventDestroyBeacon)
        .staticmethod("StaticClass")
  ;
}