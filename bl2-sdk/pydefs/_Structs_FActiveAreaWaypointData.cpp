#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActiveAreaWaypointData(py::object m)
{
    py::class_< FActiveAreaWaypointData >(m, "FActiveAreaWaypointData")
        .def_readwrite("WaypointLocation", &FActiveAreaWaypointData::WaypointLocation)
        .def_readwrite("WaypointRadius", &FActiveAreaWaypointData::WaypointRadius)
        .def_readwrite("WaypointObjective", &FActiveAreaWaypointData::WaypointObjective)
  ;
}