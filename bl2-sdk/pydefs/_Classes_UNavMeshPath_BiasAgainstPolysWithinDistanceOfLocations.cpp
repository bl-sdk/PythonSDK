#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations()
{
    py::class_< UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations,  UNavMeshPathConstraint   >("UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations")
        .def_readwrite("Location", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Location)
        .def_readwrite("Rotation", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Rotation)
        .def_readwrite("DistanceToCheck", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::DistanceToCheck)
        .def_readwrite("LocationsToCheck", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::LocationsToCheck)
        .def("StaticClass", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle)
        .def("BiasAgainstPolysWithinDistanceOfLocations", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations)
        .staticmethod("StaticClass")
  ;
}