#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActiveWaypointData(py::object m)
{
    py::class_< FActiveWaypointData >(m, "FActiveWaypointData")
        .def_readwrite("WaypointLocation", &FActiveWaypointData::WaypointLocation)
        .def_readwrite("WaypointActor", &FActiveWaypointData::WaypointActor)
        .def_readwrite("WaypointObjective", &FActiveWaypointData::WaypointObjective)
  ;
}