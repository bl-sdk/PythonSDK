#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionWaypointsData()
{
    class_< FMissionWaypointsData >("FMissionWaypointsData", no_init)
        .def_readwrite("Mission", &FMissionWaypointsData::Mission)
        .def_readwrite("Waypoints", &FMissionWaypointsData::Waypoints)
  ;
}