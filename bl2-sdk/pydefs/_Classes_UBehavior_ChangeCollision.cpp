#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCollision()
{
    class_< UBehavior_ChangeCollision, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeCollision", no_init)
        .def_readwrite("NewCollisionType", &UBehavior_ChangeCollision::NewCollisionType)
        .def("StaticClass", &UBehavior_ChangeCollision::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCollision::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}