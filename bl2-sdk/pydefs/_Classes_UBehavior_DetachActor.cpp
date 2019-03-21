#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DetachActor()
{
    class_< UBehavior_DetachActor, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DetachActor", no_init)
        .def_readwrite("DetachDirection", &UBehavior_DetachActor::DetachDirection)
        .def_readwrite("DetachSpeed", &UBehavior_DetachActor::DetachSpeed)
        .def("StaticClass", &UBehavior_DetachActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyDetachVelocity", &UBehavior_DetachActor::ApplyDetachVelocity)
        .def("CalculateDetachVelocity", &UBehavior_DetachActor::CalculateDetachVelocity)
        .def("DetachActor", &UBehavior_DetachActor::DetachActor)
        .def("ApplyBehaviorToContext", &UBehavior_DetachActor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}