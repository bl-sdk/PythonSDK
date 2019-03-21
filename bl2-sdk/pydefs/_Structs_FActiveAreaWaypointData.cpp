#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActiveAreaWaypointData()
{
    class_< FActiveAreaWaypointData >("FActiveAreaWaypointData", no_init)
        .def_readwrite("WaypointLocation", &FActiveAreaWaypointData::WaypointLocation)
        .def_readwrite("WaypointRadius", &FActiveAreaWaypointData::WaypointRadius)
        .def_readwrite("WaypointObjective", &FActiveAreaWaypointData::WaypointObjective)
  ;
}