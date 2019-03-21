#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_LocalCustomEvent()
{
    class_< UBehavior_LocalCustomEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_LocalCustomEvent", no_init)
        .def_readwrite("CustomEventName", &UBehavior_LocalCustomEvent::CustomEventName)
        .def("StaticClass", &UBehavior_LocalCustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_LocalCustomEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}