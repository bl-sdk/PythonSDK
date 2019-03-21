#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_FindHomingTarget()
{
    class_< UProjectileBehavior_FindHomingTarget, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_FindHomingTarget", no_init)
        .def_readwrite("TargetType", &UProjectileBehavior_FindHomingTarget::TargetType)
        .def_readwrite("TargetSearchFOVAngle", &UProjectileBehavior_FindHomingTarget::TargetSearchFOVAngle)
        .def_readwrite("TargetSearchRange", &UProjectileBehavior_FindHomingTarget::TargetSearchRange)
        .def("StaticClass", &UProjectileBehavior_FindHomingTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_FindHomingTarget::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}