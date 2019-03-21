#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UQoSHandlerSteamworks()
{
    py::class_< UQoSHandlerSteamworks,  UObject   >("UQoSHandlerSteamworks")
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
        .def("StaticClass", &UQoSHandlerSteamworks::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}