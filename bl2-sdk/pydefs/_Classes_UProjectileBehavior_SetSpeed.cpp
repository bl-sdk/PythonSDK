#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetSpeed()
{
    class_< UProjectileBehavior_SetSpeed, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_SetSpeed", no_init)
        .def_readwrite("NewSpeed", &UProjectileBehavior_SetSpeed::NewSpeed)
        .def_readwrite("SpeedMultiplier", &UProjectileBehavior_SetSpeed::SpeedMultiplier)
        .def("StaticClass", &UProjectileBehavior_SetSpeed::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetSpeed::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}