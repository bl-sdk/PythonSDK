#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionWaypointsData(py::object m)
{
    py::class_< FMissionWaypointsData >(m, "FMissionWaypointsData")
        .def_readwrite("Mission", &FMissionWaypointsData::Mission)
        .def_readwrite("Waypoints", &FMissionWaypointsData::Waypoints)
  ;
}