#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetProximity()
{
    class_< UProjectileBehavior_SetProximity, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_SetProximity", no_init)
        .def_readwrite("ProximityRadius", &UProjectileBehavior_SetProximity::ProximityRadius)
        .def_readwrite("ProximityHeight", &UProjectileBehavior_SetProximity::ProximityHeight)
        .def("StaticClass", &UProjectileBehavior_SetProximity::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetProximity::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}