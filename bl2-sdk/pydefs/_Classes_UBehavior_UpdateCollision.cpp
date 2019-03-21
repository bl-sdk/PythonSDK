#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_UpdateCollision()
{
    class_< UBehavior_UpdateCollision, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_UpdateCollision", no_init)
        .def("StaticClass", &UBehavior_UpdateCollision::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_UpdateCollision::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}