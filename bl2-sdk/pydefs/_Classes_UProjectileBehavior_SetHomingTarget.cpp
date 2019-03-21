#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetHomingTarget()
{
    class_< UProjectileBehavior_SetHomingTarget, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_SetHomingTarget", no_init)
        .def_readwrite("AssignedTarget", &UProjectileBehavior_SetHomingTarget::AssignedTarget)
        .def("StaticClass", &UProjectileBehavior_SetHomingTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetHomingTarget::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}