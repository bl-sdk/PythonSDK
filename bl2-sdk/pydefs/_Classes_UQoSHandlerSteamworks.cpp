#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UQoSHandlerSteamworks()
{
    class_< UQoSHandlerSteamworks, bases< UObject >  , boost::noncopyable>("UQoSHandlerSteamworks", no_init)
        .def_readwrite("MaxQoSRequest", &UQoSHandlerSteamworks::MaxQoSRequest)
        .def_readwrite("MaxQoSListen", &UQoSHandlerSteamworks::MaxQoSListen)
        .def_readwrite("NumPingProbes", &UQoSHandlerSteamworks::NumPingProbes)
        .def_readwrite("PingProbeSize", &UQoSHandlerSteamworks::PingProbeSize)
        .def_readwrite("PingTimeout", &UQoSHandlerSteamworks::PingTimeout)
        .def_readwrite("ChallengeTimeout", &UQoSHandlerSteamworks::ChallengeTimeout)
        .def_readwrite("ListenTimeout", &UQoSHandlerSteamworks::ListenTimeout)
        .def_readwrite("ListenEntries", &UQoSHandlerSteamworks::ListenEntries)
        .def_readwrite("RequestEntries", &UQoSHandlerSteamworks::RequestEntries)
        .def_readwrite("PendingRequests", &UQoSHandlerSteamworks::PendingRequests)
        .def("StaticClass", &UQoSHandlerSteamworks::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}