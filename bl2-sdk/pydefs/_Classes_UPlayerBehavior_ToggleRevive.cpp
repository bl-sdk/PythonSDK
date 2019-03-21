#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ToggleRevive()
{
    class_< UPlayerBehavior_ToggleRevive, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_ToggleRevive", no_init)
        .def("StaticClass", &UPlayerBehavior_ToggleRevive::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ToggleRevive::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}