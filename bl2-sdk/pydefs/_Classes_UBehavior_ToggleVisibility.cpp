#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleVisibility()
{
    class_< UBehavior_ToggleVisibility, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ToggleVisibility", no_init)
        .def("StaticClass", &UBehavior_ToggleVisibility::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ToggleVisibility::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}