#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFastTravelStationDiscoveryMessage()
{
    class_< UFastTravelStationDiscoveryMessage, bases< ULocalMessage >  , boost::noncopyable>("UFastTravelStationDiscoveryMessage", no_init)
        .def_readwrite("StationDiscoveredSolo", &UFastTravelStationDiscoveryMessage::StationDiscoveredSolo)
        .def_readwrite("StationDiscoveredTeam", &UFastTravelStationDiscoveryMessage::StationDiscoveredTeam)
        .def("StaticClass", &UFastTravelStationDiscoveryMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UFastTravelStationDiscoveryMessage::GetString)
        .staticmethod("StaticClass")
  ;
}