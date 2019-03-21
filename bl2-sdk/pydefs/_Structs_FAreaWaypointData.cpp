#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAreaWaypointData()
{
    class_< FAreaWaypointData >("FAreaWaypointData", no_init)
        .def_readwrite("WaypointActor", &FAreaWaypointData::WaypointActor)
        .def_readwrite("WaypointRadius", &FAreaWaypointData::WaypointRadius)
        .def_readwrite("WaypointObjective", &FAreaWaypointData::WaypointObjective)
  ;
}