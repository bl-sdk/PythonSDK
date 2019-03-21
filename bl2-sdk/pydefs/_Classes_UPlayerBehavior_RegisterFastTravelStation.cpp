#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_RegisterFastTravelStation()
{
    class_< UPlayerBehavior_RegisterFastTravelStation, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_RegisterFastTravelStation", no_init)
        .def("StaticClass", &UPlayerBehavior_RegisterFastTravelStation::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_RegisterFastTravelStation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}