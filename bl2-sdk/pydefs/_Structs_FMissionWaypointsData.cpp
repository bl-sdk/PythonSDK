#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionWaypointsData()
{
    py::class_< FMissionWaypointsData >("FMissionWaypointsData")
        .def_readwrite("Mission", &FMissionWaypointsData::Mission)
        .def_readwrite("Waypoints", &FMissionWaypointsData::Waypoints)
  ;
}