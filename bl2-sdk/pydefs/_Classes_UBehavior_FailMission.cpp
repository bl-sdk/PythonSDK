#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_FailMission()
{
    class_< UBehavior_FailMission, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_FailMission", no_init)
        .def("StaticClass", &UBehavior_FailMission::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_FailMission::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}