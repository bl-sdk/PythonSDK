#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations()
{
    class_< UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations, bases< UNavMeshPathConstraint >  , boost::noncopyable>("UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations", no_init)
        .def_readwrite("Location", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Location)
        .def_readwrite("Rotation", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Rotation)
        .def_readwrite("DistanceToCheck", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::DistanceToCheck)
        .def_readwrite("LocationsToCheck", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::LocationsToCheck)
        .def("StaticClass", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle)
        .def("BiasAgainstPolysWithinDistanceOfLocations", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations)
        .staticmethod("StaticClass")
  ;
}