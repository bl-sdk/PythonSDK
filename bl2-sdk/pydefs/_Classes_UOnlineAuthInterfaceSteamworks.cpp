#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineAuthInterfaceSteamworks()
{
    class_< UOnlineAuthInterfaceSteamworks, bases< UOnlineAuthInterfaceImpl >  , boost::noncopyable>("UOnlineAuthInterfaceSteamworks", no_init)
        .def_readwrite("AuthCallbackBridge", &UOnlineAuthInterfaceSteamworks::AuthCallbackBridge)
        .def("StaticClass", &UOnlineAuthInterfaceSteamworks::StaticClass, return_value_policy< reference_existing_object >())
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