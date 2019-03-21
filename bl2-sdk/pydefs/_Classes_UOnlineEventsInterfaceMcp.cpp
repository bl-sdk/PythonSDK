#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineEventsInterfaceMcp()
{
    class_< UOnlineEventsInterfaceMcp, bases< UMCPBase >  , boost::noncopyable>("UOnlineEventsInterfaceMcp", no_init)
        .def_readwrite("EventUploadConfigs", &UOnlineEventsInterfaceMcp::EventUploadConfigs)
        .def_readwrite("MCPEventPostObjects", &UOnlineEventsInterfaceMcp::MCPEventPostObjects)
        .def_readwrite("DisabledUploadTypes", &UOnlineEventsInterfaceMcp::DisabledUploadTypes)
        .def("StaticClass", &UOnlineEventsInterfaceMcp::StaticClass, return_value_policy< reference_existing_object >())
        .def("UploadMatchmakingStats", &UOnlineEventsInterfaceMcp::UploadMatchmakingStats)
        .def("UpdatePlaylistPopulation", &UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation)
        .def("UploadGameplayEventsData", &UOnlineEventsInterfaceMcp::UploadGameplayEventsData)
        .def("UploadPlayerData", &UOnlineEventsInterfaceMcp::UploadPlayerData)
        .staticmethod("StaticClass")
  ;
}