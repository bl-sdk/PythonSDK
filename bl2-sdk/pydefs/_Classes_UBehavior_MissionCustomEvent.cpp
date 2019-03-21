#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_MissionCustomEvent()
{
    class_< UBehavior_MissionCustomEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_MissionCustomEvent", no_init)
        .def_readwrite("RelatedMission", &UBehavior_MissionCustomEvent::RelatedMission)
        .def_readwrite("EventName", &UBehavior_MissionCustomEvent::EventName)
        .def("StaticClass", &UBehavior_MissionCustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_MissionCustomEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}