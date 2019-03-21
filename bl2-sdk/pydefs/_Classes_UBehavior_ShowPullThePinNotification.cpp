#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ShowPullThePinNotification()
{
    class_< UBehavior_ShowPullThePinNotification, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ShowPullThePinNotification", no_init)
        .def_readwrite("ExternalClip", &UBehavior_ShowPullThePinNotification::ExternalClip)
        .def("StaticClass", &UBehavior_ShowPullThePinNotification::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ShowPullThePinNotification::ApplyBehaviorToContext)
        .def("ResolveController", &UBehavior_ShowPullThePinNotification::ResolveController, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}