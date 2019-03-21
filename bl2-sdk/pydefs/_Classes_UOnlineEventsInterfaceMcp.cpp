#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineEventsInterfaceMcp(py::object m)
{
    py::class_< UOnlineEventsInterfaceMcp,  UMCPBase   >(m, "UOnlineEventsInterfaceMcp")
        .def_readwrite("EventUploadConfigs", &UOnlineEventsInterfaceMcp::EventUploadConfigs)
        .def_readwrite("MCPEventPostObjects", &UOnlineEventsInterfaceMcp::MCPEventPostObjects)
        .def_readwrite("DisabledUploadTypes", &UOnlineEventsInterfaceMcp::DisabledUploadTypes)
        .def("StaticClass", &UOnlineEventsInterfaceMcp::StaticClass, py::return_value_policy::reference)
        .def("UploadMatchmakingStats", &UOnlineEventsInterfaceMcp::UploadMatchmakingStats)
        .def("UpdatePlaylistPopulation", &UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation)
        .def("UploadGameplayEventsData", &UOnlineEventsInterfaceMcp::UploadGameplayEventsData)
        .def("UploadPlayerData", &UOnlineEventsInterfaceMcp::UploadPlayerData)
          ;
}