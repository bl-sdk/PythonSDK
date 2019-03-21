#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GetClosestPlayer()
{
    class_< UBehavior_GetClosestPlayer, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GetClosestPlayer", no_init)
        .def("StaticClass", &UBehavior_GetClosestPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_GetClosestPlayer::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetClosestPlayer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}