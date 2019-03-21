#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_StartMissionTimer()
{
    class_< UBehavior_StartMissionTimer, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_StartMissionTimer", no_init)
        .def("StaticClass", &UBehavior_StartMissionTimer::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_StartMissionTimer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}