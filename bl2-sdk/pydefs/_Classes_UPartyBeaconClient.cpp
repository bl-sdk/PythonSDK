#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPartyBeaconClient(py::module &m)
{
    py::class_< UPartyBeaconClient,  UPartyBeacon   >(m, "UPartyBeaconClient")
        .def_readwrite("HostPendingRequest", &UPartyBeaconClient::HostPendingRequest)
        .def_readwrite("PendingRequest", &UPartyBeaconClient::PendingRequest)
        .def_readwrite("ClientBeaconState", &UPartyBeaconClient::ClientBeaconState)
        .def_readwrite("ClientBeaconRequestType", &UPartyBeaconClient::ClientBeaconRequestType)
        .def_readwrite("ReservationRequestTimeout", &UPartyBeaconClient::ReservationRequestTimeout)
        .def_readwrite("ReservationRequestElapsedTime", &UPartyBeaconClient::ReservationRequestElapsedTime)
        .def_readwrite("ResolverClassName", &UPartyBeaconClient::ResolverClassName)
        .def_readwrite("ResolverClass", &UPartyBeaconClient::ResolverClass)
        .def_readwrite("Resolver", &UPartyBeaconClient::Resolver)
        .def("StaticClass", &UPartyBeaconClient::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyBeacon", &UPartyBeaconClient::eventDestroyBeacon)
        .def("CancelReservation", &UPartyBeaconClient::CancelReservation)
        .def("RequestReservationUpdate", &UPartyBeaconClient::RequestReservationUpdate)
        .def("RequestReservation", &UPartyBeaconClient::RequestReservation)
        .def("OnHostHasCancelled", &UPartyBeaconClient::OnHostHasCancelled)
        .def("OnHostIsReady", &UPartyBeaconClient::OnHostIsReady)
        .def("OnTravelRequestReceived", &UPartyBeaconClient::OnTravelRequestReceived)
        .def("OnReservationCountUpdated", &UPartyBeaconClient::OnReservationCountUpdated)
        .def("OnReservationRequestComplete", &UPartyBeaconClient::OnReservationRequestComplete)
          ;
}