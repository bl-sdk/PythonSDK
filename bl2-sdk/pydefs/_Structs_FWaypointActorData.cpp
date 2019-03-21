#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWaypointActorData()
{
    class_< FWaypointActorData >("FWaypointActorData", no_init)
        .def_readwrite("WaypointActor", &FWaypointActorData::WaypointActor)
        .def_readwrite("WaypointObjective", &FWaypointActorData::WaypointObjective)
        .def_readwrite("Waypoints", &FWaypointActorData::Waypoints)
  ;
}