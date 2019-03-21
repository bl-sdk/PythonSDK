#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVehicle_Turret()
{
    class_< AWillowVehicle_Turret, bases< AWillowVehicle >  , boost::noncopyable>("AWillowVehicle_Turret", no_init)
        .def("StaticClass", &AWillowVehicle_Turret::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}