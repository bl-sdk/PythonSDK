#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStationTeleporterVehicleExitPoint()
{
    class_< AStationTeleporterVehicleExitPoint, bases< AStationTeleporterExitPoint >  , boost::noncopyable>("AStationTeleporterVehicleExitPoint", no_init)
        .def("StaticClass", &AStationTeleporterVehicleExitPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}