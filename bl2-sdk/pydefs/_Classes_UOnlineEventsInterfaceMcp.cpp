#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineEventsInterfaceMcp(py::module &m)
{
    py::class_< UOnlineEventsInterfaceMcp,  UMCPBase   >(m, "UOnlineEventsInterfaceMcp")
		.def_static("StaticClass", &UOnlineEventsInterfaceMcp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EventUploadConfigs", &UOnlineEventsInterfaceMcp::EventUploadConfigs)
        .def_readwrite("MCPEventPostObjects", &UOnlineEventsInterfaceMcp::MCPEventPostObjects)
        .def_readwrite("DisabledUploadTypes", &UOnlineEventsInterfaceMcp::DisabledUploadTypes)
        .def("UploadMatchmakingStats", &UOnlineEventsInterfaceMcp::UploadMatchmakingStats)
        .def("UpdatePlaylistPopulation", &UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation)
        .def("UploadGameplayEventsData", &UOnlineEventsInterfaceMcp::UploadGameplayEventsData)
        .def("UploadPlayerData", &UOnlineEventsInterfaceMcp::UploadPlayerData)
          ;
}