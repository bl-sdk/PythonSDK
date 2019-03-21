#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ActivateMission()
{
    class_< UBehavior_ActivateMission, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ActivateMission", no_init)
        .def("StaticClass", &UBehavior_ActivateMission::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ActivateMission::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}