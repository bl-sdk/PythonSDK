#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStationTeleporterDestination()
{
    class_< AStationTeleporterDestination, bases< ATeleporterDestination >  , boost::noncopyable>("AStationTeleporterDestination", no_init)
        .def_readwrite("ExitPointRadius", &AStationTeleporterDestination::ExitPointRadius)
        .def_readwrite("ExitPointHeight", &AStationTeleporterDestination::ExitPointHeight)
        .def("StaticClass", &AStationTeleporterDestination::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateExitPointHeights", &AStationTeleporterDestination::UpdateExitPointHeights)
        .def("UpdateExitPointLocations", &AStationTeleporterDestination::UpdateExitPointLocations)
        .def("eventDestroyed", &AStationTeleporterDestination::eventDestroyed)
        .staticmethod("StaticClass")
  ;
}