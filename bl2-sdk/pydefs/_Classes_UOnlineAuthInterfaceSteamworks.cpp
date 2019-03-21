#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineAuthInterfaceSteamworks()
{
    py::class_< UOnlineAuthInterfaceSteamworks,  UOnlineAuthInterfaceImpl   >("UOnlineAuthInterfaceSteamworks")
        .def_readwrite("AuthCallbackBridge", &UOnlineAuthInterfaceSteamworks::AuthCallbackBridge)
        .def("StaticClass", &UOnlineAuthInterfaceSteamworks::StaticClass, py::return_value_policy::reference)
        .def("GetServerAddr", &UOnlineAuthInterfaceSteamworks::GetServerAddr)
        .def("GetServerUniqueId", &UOnlineAuthInterfaceSteamworks::GetServerUniqueId)
        .def("EndRemoteServerAuthSession", &UOnlineAuthInterfaceSteamworks::EndRemoteServerAuthSession)
        .def("EndLocalServerAuthSession", &UOnlineAuthInterfaceSteamworks::EndLocalServerAuthSession)
        .def("VerifyServerAuthSession", &UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession)
        .def("CreateServerAuthSession", &UOnlineAuthInterfaceSteamworks::CreateServerAuthSession)
        .def("EndRemoteClientAuthSession", &UOnlineAuthInterfaceSteamworks::EndRemoteClientAuthSession)
        .def("EndLocalClientAuthSession", &UOnlineAuthInterfaceSteamworks::EndLocalClientAuthSession)
        .def("VerifyClientAuthSession", &UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession)
        .def("CreateClientAuthSession", &UOnlineAuthInterfaceSteamworks::CreateClientAuthSession)
        .def("SendAuthRequestServer", &UOnlineAuthInterfaceSteamworks::SendAuthRequestServer)
        .def("SendAuthRequestClient", &UOnlineAuthInterfaceSteamworks::SendAuthRequestClient)
        .staticmethod("StaticClass")
  ;
}