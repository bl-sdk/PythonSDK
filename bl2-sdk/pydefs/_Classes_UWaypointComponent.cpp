#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWaypointComponent()
{
    py::class_< UWaypointComponent,  UActorComponent   >("UWaypointComponent")
        .def("StaticClass", &UWaypointComponent::StaticClass, py::return_value_policy::reference)
        .def("RemoveWaypoint", &UWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}