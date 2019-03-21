#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetStickyGrenade()
{
    class_< UProjectileBehavior_SetStickyGrenade, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_SetStickyGrenade", no_init)
        .def("StaticClass", &UProjectileBehavior_SetStickyGrenade::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetStickyGrenade::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}