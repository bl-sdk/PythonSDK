#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AProximityActor()
{
    class_< AProximityActor, bases< AActor >  , boost::noncopyable>("AProximityActor", no_init)
        .def_readwrite("ProximityRadius", &AProximityActor::ProximityRadius)
        .def_readwrite("ProximityHeight", &AProximityActor::ProximityHeight)
        .def_readwrite("ProximityCylinder", &AProximityActor::ProximityCylinder)
        .def("StaticClass", &AProximityActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTouch", &AProximityActor::eventTouch)
        .def("SetProximitySize", &AProximityActor::SetProximitySize)
        .staticmethod("StaticClass")
  ;
}