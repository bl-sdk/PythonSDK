#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GetVelocity()
{
    class_< UBehavior_GetVelocity, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GetVelocity", no_init)
        .def("StaticClass", &UBehavior_GetVelocity::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_GetVelocity::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetVelocity::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}