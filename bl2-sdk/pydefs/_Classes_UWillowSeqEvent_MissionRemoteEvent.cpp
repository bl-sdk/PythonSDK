#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_MissionRemoteEvent()
{
    class_< UWillowSeqEvent_MissionRemoteEvent, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_MissionRemoteEvent", no_init)
        .def_readwrite("AssociatedMissionDefinition", &UWillowSeqEvent_MissionRemoteEvent::AssociatedMissionDefinition)
        .def_readwrite("EventName", &UWillowSeqEvent_MissionRemoteEvent::EventName)
        .def("StaticClass", &UWillowSeqEvent_MissionRemoteEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}