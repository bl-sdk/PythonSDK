#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetShieldColor()
{
    class_< UBehavior_SetShieldColor, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetShieldColor", no_init)
        .def_readwrite("NewShieldColor", &UBehavior_SetShieldColor::NewShieldColor)
        .def("StaticClass", &UBehavior_SetShieldColor::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetShieldColor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}