#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAreaWaypointData()
{
    py::class_< FAreaWaypointData >("FAreaWaypointData")
        .def_readwrite("WaypointActor", &FAreaWaypointData::WaypointActor)
        .def_readwrite("WaypointRadius", &FAreaWaypointData::WaypointRadius)
        .def_readwrite("WaypointObjective", &FAreaWaypointData::WaypointObjective)
  ;
}