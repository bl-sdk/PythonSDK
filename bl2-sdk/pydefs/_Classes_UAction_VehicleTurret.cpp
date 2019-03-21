#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_VehicleTurret()
{
    class_< UAction_VehicleTurret, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_VehicleTurret", no_init)
        .def("StaticClass", &UAction_VehicleTurret::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventUpdate", &UAction_VehicleTurret::eventUpdate)
        .def("eventStop", &UAction_VehicleTurret::eventStop)
        .def("eventStart", &UAction_VehicleTurret::eventStart)
        .def("eventCanRun", &UAction_VehicleTurret::eventCanRun)
        .staticmethod("StaticClass")
  ;
}