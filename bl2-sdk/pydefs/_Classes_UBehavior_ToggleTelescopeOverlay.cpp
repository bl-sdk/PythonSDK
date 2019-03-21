#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleTelescopeOverlay()
{
    class_< UBehavior_ToggleTelescopeOverlay, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ToggleTelescopeOverlay", no_init)
        .def("StaticClass", &UBehavior_ToggleTelescopeOverlay::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveController", &UBehavior_ToggleTelescopeOverlay::ResolveController, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ToggleTelescopeOverlay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}