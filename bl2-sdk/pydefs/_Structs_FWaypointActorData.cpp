#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWaypointActorData(py::module &m)
{
    py::class_< FWaypointActorData >(m, "FWaypointActorData")
        .def_readwrite("WaypointActor", &FWaypointActorData::WaypointActor)
        .def_readwrite("WaypointObjective", &FWaypointActorData::WaypointObjective)
        .def_readwrite("Waypoints", &FWaypointActorData::Waypoints)
  ;
}