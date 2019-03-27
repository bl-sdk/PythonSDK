#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMeshBeaconClient(py::module &m)
{
    py::class_< UMeshBeaconClient,  UMeshBeacon   >(m, "UMeshBeaconClient")
		.def_static("StaticClass", &UMeshBeaconClient::StaticClass, py::return_value_policy::reference)
        .def_readwrite("HostPendingRequest", &UMeshBeaconClient::HostPendingRequest)
        .def_readwrite("ClientPendingRequest", &UMeshBeaconClient::ClientPendingRequest)
        .def_readwrite("CurrentBandwidthTest", &UMeshBeaconClient::CurrentBandwidthTest)
        .def_readwrite("ClientBeaconState", &UMeshBeaconClient::ClientBeaconState)
        .def_readwrite("ClientBeaconRequestType", &UMeshBeaconClient::ClientBeaconRequestType)
        .def_readwrite("ConnectionRequestTimeout", &UMeshBeaconClient::ConnectionRequestTimeout)
        .def_readwrite("ConnectionRequestElapsedTime", &UMeshBeaconClient::ConnectionRequestElapsedTime)
        .def_readwrite("ResolverClassName", &UMeshBeaconClient::ResolverClassName)
        .def_readwrite("ResolverClass", &UMeshBeaconClient::ResolverClass)
        .def_readwrite("Resolver", &UMeshBeaconClient::Resolver)
        .def("SendHostNewGameSessionResponse", &UMeshBeaconClient::SendHostNewGameSessionResponse)
        .def("OnCreateNewSessionRequestReceived", &UMeshBeaconClient::OnCreateNewSessionRequestReceived)
        .def("OnTravelRequestReceived", &UMeshBeaconClient::OnTravelRequestReceived)
        .def("OnReceivedBandwidthTestResults", &UMeshBeaconClient::OnReceivedBandwidthTestResults)
        .def("OnReceivedBandwidthTestRequest", &UMeshBeaconClient::OnReceivedBandwidthTestRequest)
        .def("OnConnectionRequestResult", &UMeshBeaconClient::OnConnectionRequestResult)
        .def("BeginBandwidthTest", &UMeshBeaconClient::BeginBandwidthTest)
        .def("RequestConnection", &UMeshBeaconClient::RequestConnection)
        .def("eventDestroyBeacon", &UMeshBeaconClient::eventDestroyBeacon)
          ;
}