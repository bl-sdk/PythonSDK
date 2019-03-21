#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_IsObjectVehicle()
{
    class_< UBehavior_IsObjectVehicle, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_IsObjectVehicle", no_init)
        .def_readwrite("VehicleCandidate", &UBehavior_IsObjectVehicle::VehicleCandidate)
        .def("StaticClass", &UBehavior_IsObjectVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_IsObjectVehicle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}