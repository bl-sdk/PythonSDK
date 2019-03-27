#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPartyBeacon(py::module &m)
{
    py::class_< UPartyBeacon,  UObject   >(m, "UPartyBeacon")
		.def_static("StaticClass", &UPartyBeacon::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FTickableObject", &UPartyBeacon::VfTable_FTickableObject)
        .def_readwrite("PartyBeaconPort", &UPartyBeacon::PartyBeaconPort)
        .def_readwrite("Socket", &UPartyBeacon::Socket)
        .def_readwrite("HeartbeatTimeout", &UPartyBeacon::HeartbeatTimeout)
        .def_readwrite("ElapsedHeartbeatTime", &UPartyBeacon::ElapsedHeartbeatTime)
        .def_readwrite("BeaconName", &UPartyBeacon::BeaconName)
        .def("OnDestroyComplete", &UPartyBeacon::OnDestroyComplete)
        .def("eventDestroyBeacon", &UPartyBeacon::eventDestroyBeacon)
          ;
}