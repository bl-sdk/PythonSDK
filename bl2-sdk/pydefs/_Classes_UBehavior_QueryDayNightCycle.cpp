#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_QueryDayNightCycle()
{
    class_< UBehavior_QueryDayNightCycle, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_QueryDayNightCycle", no_init)
        .def("StaticClass", &UBehavior_QueryDayNightCycle::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_QueryDayNightCycle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}