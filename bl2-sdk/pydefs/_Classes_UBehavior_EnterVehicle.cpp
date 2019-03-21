#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_EnterVehicle()
{
    class_< UBehavior_EnterVehicle, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_EnterVehicle", no_init)
        .def_readwrite("SeatPos", &UBehavior_EnterVehicle::SeatPos)
        .def_readwrite("VehicleContext", &UBehavior_EnterVehicle::VehicleContext)
        .def("StaticClass", &UBehavior_EnterVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_EnterVehicle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}