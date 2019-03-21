#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationDiscoveryMessage()
{
    py::class_< UFastTravelStationDiscoveryMessage,  ULocalMessage   >("UFastTravelStationDiscoveryMessage")
        .def_readwrite("StationDiscoveredSolo", &UFastTravelStationDiscoveryMessage::StationDiscoveredSolo)
        .def_readwrite("StationDiscoveredTeam", &UFastTravelStationDiscoveryMessage::StationDiscoveredTeam)
        .def("StaticClass", &UFastTravelStationDiscoveryMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UFastTravelStationDiscoveryMessage::GetString)
        .staticmethod("StaticClass")
  ;
}