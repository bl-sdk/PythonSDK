#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_StopMissionTimer()
{
    class_< UBehavior_StopMissionTimer, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_StopMissionTimer", no_init)
        .def("StaticClass", &UBehavior_StopMissionTimer::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_StopMissionTimer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}