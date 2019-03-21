#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CustomEvent()
{
    class_< UBehavior_CustomEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CustomEvent", no_init)
        .def_readwrite("CustomEventName", &UBehavior_CustomEvent::CustomEventName)
        .def("StaticClass", &UBehavior_CustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CustomEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}