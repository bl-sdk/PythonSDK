#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWaypointActorData()
{
    py::class_< FWaypointActorData >("FWaypointActorData")
        .def_readwrite("WaypointActor", &FWaypointActorData::WaypointActor)
        .def_readwrite("WaypointObjective", &FWaypointActorData::WaypointObjective)
        .def_readwrite("Waypoints", &FWaypointActorData::Waypoints)
  ;
}