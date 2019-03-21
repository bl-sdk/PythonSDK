#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_MissionRemoteEvent()
{
    class_< UBehavior_MissionRemoteEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_MissionRemoteEvent", no_init)
        .def_readwrite("EventName", &UBehavior_MissionRemoteEvent::EventName)
        .def("StaticClass", &UBehavior_MissionRemoteEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_MissionRemoteEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}