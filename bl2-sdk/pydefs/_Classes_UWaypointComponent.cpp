#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWaypointComponent(py::module &m)
{
    py::class_< UWaypointComponent,  UActorComponent   >(m, "UWaypointComponent")
        .def("RemoveWaypoint", &UWaypointComponent::RemoveWaypoint)
          ;
}