#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgType_VehicleCollision()
{
    class_< UWillowDmgType_VehicleCollision, bases< UWillowDamageType >  , boost::noncopyable>("UWillowDmgType_VehicleCollision", no_init)
        .def("StaticClass", &UWillowDmgType_VehicleCollision::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}