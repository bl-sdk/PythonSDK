#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetShieldTriggeredState()
{
    class_< UBehavior_SetShieldTriggeredState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetShieldTriggeredState", no_init)
        .def("StaticClass", &UBehavior_SetShieldTriggeredState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetShieldTriggeredState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}