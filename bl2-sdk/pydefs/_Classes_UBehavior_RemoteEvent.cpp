#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RemoteEvent()
{
    class_< UBehavior_RemoteEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RemoteEvent", no_init)
        .def_readwrite("EventName", &UBehavior_RemoteEvent::EventName)
        .def("StaticClass", &UBehavior_RemoteEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RemoteEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}