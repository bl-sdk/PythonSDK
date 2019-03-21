#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetLookAtSpeed()
{
    class_< UBehavior_SetLookAtSpeed, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetLookAtSpeed", no_init)
        .def_readwrite("Action", &UBehavior_SetLookAtSpeed::Action)
        .def_readwrite("OverrideSpeed", &UBehavior_SetLookAtSpeed::OverrideSpeed)
        .def("StaticClass", &UBehavior_SetLookAtSpeed::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetLookAtSpeed::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}